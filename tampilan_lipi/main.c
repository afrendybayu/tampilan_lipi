/*
	FreeRTOS.org V5.1.1 - Copyright (C) 2003-2008 Richard Barry.
	
	entri dari boot.s adalah ke main
	
	27 Feb 2009
	entah kenapa keypad nya sering ngacau
	OK .. keypad sudah mulai bener
	
	28 Feb 2009
	dirapikan 
	
	set_titik diberikan tambahan alamat stack/board
	
	sementara sumber.alamat belum dipakai, nanti saat request 
	dari sumber yang banyak alamatnya, sumber/modul/server nya yang
	melakukan urutan pengiriman dari masing2 boardnya.
	
	keterangan masing2 titik langsung didapat dari struct keter
	
	led depan diaktifkan
	
	huh .. pusing keypad gak beres2.
	keypad pakai interrupt saja
	
	21 April 2009
	Clean up untuk release stable versi 1.4
	
		 
	3 Juli 2009
	Coba menggunakan Modbus
	modbus memakai MAX485 dan UART3
	
	30 Nov 2009
	untuk tampilan lipi : malingping
	
	19 Jan 2010
	Coba untuk GSM FTP
	
	11 Mar 2010
	tendang_wdog dipindah ke task LCD
*/


/* Scheduler includes. */
#include "FreeRTOS.h"
#include "task.h"
#include "queue.h"
#include "semphr.h"

#define BAUD_RATE	( ( unsigned portLONG ) 115200 )

#ifdef TAMPILAN_LPC
#define LED_UTAMA	(1 << 26)			// GPIO026
#endif

#ifdef TAMPILAN_LPC_43
#define LED_UTAMA	BIT(27)

/* led di keypad */
#define LED_PICKUP	BIT(14)

#define BACKLIT		BIT(20)	// PF15, P1.20
#endif

xSemaphoreHandle lcd_sem;

xSemaphoreHandle mutex_lcd_sem;
unsigned int loop_idle=0;
unsigned int idle_lama;
unsigned int tot_idle;

static char tog;
static void sysInit(void);
void init_led_utama(void);

xTaskHandle hdl_lcd;
xTaskHandle hdl_led;
xTaskHandle hdl_tampilan;
xTaskHandle hdl_shell;
xTaskHandle hdl_ether;


#define TXDE	BIT(24)

void dele(int dd)
{
	int g;
	int i;
	int dum;

	for (i=0; i<dd; i++)
	{
		dum = FIO0DIR;
	}
}


/*-----------------------------------------------------------*/
#define jalankan

int main( void )
{
	sysInit();

	/* reset semua port dulu */
	FIO2DIR  = 0xFFFFFFFF;
	FIO2MASK = 0xFFFFFFFF; 
	
	FIO1DIR  = 0xFFFFFFFF;
	FIO1MASK = 0xFFFFFFFF; 

	/* USB Power dinyalakan supaya memory USB bisa dipakai */
	PCONP |= 0x80000000;

	FIO0DIR = LED_UTAMA;
	FIO0CLR = LED_UTAMA;
	
	FIO1DIR  = FIO1DIR | LED_PICKUP | BACKLIT;
	FIO1MASK = FIO1MASK & ~(LED_PICKUP | BACKLIT);
	
	init_port_lcd();
	init_lcd();
	
	#if 0
	/* PCONP enable UART3 */
	PCONP |= BIT(25);
	
	/* PCLK UART3 */
	PCLKSEL1 &= ~(BIT(18) | BIT(19));
	
	/* init TX3, RX3 */
	//PINSEL1 &= ~(BIT(18) | BIT(19) | BIT(20) | BIT(21));
	PINSEL1 |= (BIT(18) | BIT(19));
	PINSEL1 |= (BIT(20) | BIT(21));
	
	/* TXDE di highkan */
	FIO0DIR |= TXDE;
	FIO0SET = TXDE;
	#endif
	
	#if (PAKAI_SERIAL_2 == 1)
	/* PCONP enable UART2 */
	PCONP |= BIT(24);
	
	/* PCLK UART2, PCLK = CCLK */
	PCLKSEL1 &= ~(BIT(16) | BIT(17));
	PCLKSEL1 |= BIT(16);
	
	/* init TX2, RX2 */
	PINSEL0 |= (BIT(20) | BIT(22));
	
	#endif
	
	/*	untuk cek blinking saat system boot */
#ifdef CEK_BLINK
	int t=0;
	while(t<5)
	{
		dele(1000000);
		FIO0CLR = LED_UTAMA;
		dele(1000000);
		FIO0SET = LED_UTAMA;
		t++;
	}
#endif

	xSerialPortInitMinimal( BAUD_RATE, (1 * configMINIMAL_STACK_SIZE) );
	//serial2_init( BAUD_RATE, 32 );
	//serial2_init( 19200, configMINIMAL_STACK_SIZE );

#if 1
	init_led_utama();		// 5, -2
	init_task_lcd();		// 1, +1
	start_ether();
	init_shell();			// 10, 0
	init_task_tampilan();	// 10, -1
	//init_task_pm();			// 10, +1

	vTaskStartScheduler();

    /* Will only get here if there was insufficient memory to create the idle
    task. */
	return 0;
#endif
}

unsigned int waktu_buat_file=0;
int saat_gsm_ftp;
int timer_saat_gsm;

void togle_led_utama(void)
{
	if (tog)
	{
		FIO0SET = LED_UTAMA;
		FIO1SET = LED_PICKUP;
		tog = 0;
		
		/* kalkulasi idle loop */
		tot_idle = loop_idle - idle_lama;
		idle_lama = loop_idle;
		
		/* reset wdog setiap detik */
		tendang_wdog();
		
		/* timer_saat_gsm diclock setiap detik */
		timer_saat_gsm++;
		if (timer_saat_gsm > (60 * 10))
		{
			saat_gsm_ftp = 1;
			timer_saat_gsm = 0;
		}
		
		#if (PAKAI_SELENOID == 1)
		set_selenoid( 1 );
		#endif
	
	}
	else
	{
		FIO0CLR = LED_UTAMA;
		FIO1CLR = LED_PICKUP;
		tog = 1;
		
		#if (PAKAI_SELENOID == 1)
		unset_selenoid( 1 );
		#endif
	}
}

static portTASK_FUNCTION(task_led2, pvParameters )
{
	int i;
	int c;
	int x;
	
	tog = 0;
	loop_idle = 0;
	idle_lama = 0;
	timer_saat_gsm = 0;
	
	vTaskDelay(1000);
	FIO1SET = BACKLIT;
	
	#if (PAKAI_SELENOID == 1)
	init_selenoid();
	#endif
	
	for (;;)
	{
		togle_led_utama();
		vTaskDelay(500);
		
		#if (PAKAI_GSM_FTP == 1)
		if (saat_gsm_ftp == 1)
		{
			gsm_ftp(0, "asas");
			saat_gsm_ftp = 0;
		}
		#endif
	}
}
void init_led_utama(void)
{	
	/* tadinya stak = 5, prio - 1 */
	xTaskCreate(task_led2, ( signed portCHAR * ) "Led2",  (configMINIMAL_STACK_SIZE * 10) , \
		NULL, tskIDLE_PRIORITY, ( xTaskHandle * ) &hdl_led );
}



/* LCD LCD LCD */
portTASK_FUNCTION( LCD_task, pvParameters )
{
	vSemaphoreCreateBinary( lcd_sem );
    xSemaphoreTake( lcd_sem, 0 );
	
	/*
	mutex_lcd_sem = xSemaphoreCreateMutex();
	vTaskDelay(100);
	if (mutex_lcd_sem == NULL)
	{
		printf("Create mutex_copy ERROR !\r\n");
	}*/
	
	for(;;) 
	{
		if ( xSemaphoreTake( lcd_sem, 1000 ) == pdTRUE )
		{
			update_hard_lcd();
		}
		
		//vTaskDelay(200);
		//update_hard_lcd();	
	}
}

void init_task_lcd(void)
{
	xTaskCreate( LCD_task, ( signed portCHAR * ) "LCD", (configMINIMAL_STACK_SIZE * 1), \
		NULL, tskIDLE_PRIORITY + 1, (xTaskHandle *) &hdl_lcd );	
}

#if 0
/* UART3 dan Modbus */
unsigned char bufi[128];

portTASK_FUNCTION( modbus_task, pvParameters )
{	int c;
	int tot=0;	
	unsigned int jum_balik;
	int i;
	int loop_wait=0;
	char *st;	
	
	char a;
	char b;
	
	
	vTaskDelay(110);
	
	for(;;) 
	{
		lagi :
		FIO0SET = TXDE;
		jum_balik = get_PM710(reg_satuan, 4);		
		st = (char *) &pmod;
		for (i=0; i< sizeof(pmod); i++)
		{
			xSerialPutChar3( 0, *st, 100 );
			st++;	
		}
		
		//FIO0CLR = TXDE;
		
		loop_wait = 0;
		for (;;)
		{
			if (ser3_getchar(1, &c, 10 ) == pdTRUE)
	  		{
	  			bufi[tot] = (unsigned char) c;
	  			tot++;
	  			if (tot == jum_balik)
	  			{
	  				//printf("dpt reply 0x%X\r\n", c);
	  				//xSerialPutChar(0, 'a', 100);
	  				//break;
	  				for (i=0; i<tot; i++)
	  				{
	  					a = bufi[i] >> 4;
						b = bufi[i] & 0xF;
						
						if (a < 10)
							a = a + '0';
						else
							a = a + 'A' - 10;
						
						xSerialPutChar(0, a, 100);
			
						if (b < 10)	
							b = b + '0';
						else
							b = b + 'A' - 10;
						
						xSerialPutChar(0, b, 100);
						xSerialPutChar(0, ' ', 100);
	  					/*
	  					if (bufi[i] < 10)
	  						xSerialPutChar(0, (bufi[i] + '0'), 100);
	  					else
	  						xSerialPutChar(0, ((bufi[i]-10) + 'A'), 100);
	  					*/	  						  				
	  				}
	  				xSerialPutChar(0, 0x0D, 100);
	  				
	  				tot = 0;
	  				goto lagi;
	  			}	  		
	  		}
	  		else
	  		{
	  			loop_wait++;
	  			if (loop_wait > 200)
	  			{ 	  				
	  				xSerialPutChar(0, 'x', 100);
	  				break;
	  			}
	  		} 
	  	}
	}
}

void init_task_modbus(void)
{
	xTaskCreate( modbus_task, ( signed portCHAR * ) "MODB", (configMINIMAL_STACK_SIZE * 4), \
		NULL, tskIDLE_PRIORITY+2, NULL );	
}#endif
