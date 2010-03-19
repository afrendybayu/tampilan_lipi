/*
dapat dari lib tern
4 jan 07
*/
 
 
#define NUM 95
unsigned int arial[NUM][16] __attribute__ ((section (".lokasi_font"))) =
{
 
{0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000}, // blank
{0x0000,0x0000,0x0600,0x0600,0x0000,0x0600,0x0600,0x0f00,0x0f00,0x1f80,0x1f80,0x1f80,0x1f80,0x1f80,0x0f00,0x0600}, // ! exclamation
{0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x1980,0x1980,0x1980,0x1980,0x1980}, // " double quote
{0x0000,0x0000,0x30c0,0x30c0,0x30c0,0xfff0,0xfff0,0x30c0,0x30c0,0x30c0,0x30c0,0xfff0,0xfff0,0x30c0,0x30c0,0x30c0}, // # pound
{0x0000,0x0600,0x0600,0x7fe0,0xffe0,0xc630,0x0630,0x0630,0x7ff0,0xffe0,0xc600,0xc630,0xfff0,0x7fe0,0x0600,0x0600}, // $ dollar sign
{0x0000,0x0000,0xc000,0xc000,0xe000,0x7000,0x3860,0x1c60,0x0e00,0x0700,0x0380,0x31c0,0x30e0,0x0070,0x0030,0x0030}, // % percent
{0x0000,0x0000,0x7e30,0xff70,0xc3e0,0xc1c0,0xc3c0,0xe7c0,0x7ef0,0x3cf0,0x3c00,0x7e00,0x6700,0x6300,0x7f00,0x3e00}, // & ampersand
{0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x3800,0x3c00,0x1c00,0x1c00,0x1c00}, // ' right single quote
{0x0000,0x0000,0x0f00,0x1f00,0x3800,0x7000,0xe000,0xe000,0xe000,0xe000,0xe000,0xe000,0x7000,0x3800,0x1f00,0x0f00}, // ( paranthesis
{0x0000,0x0000,0x1f00,0x0f80,0x01c0,0x00e0,0x0070,0x0070,0x0070,0x0070,0x0070,0x0070,0x00e0,0x01c0,0x0f80,0x0f00}, // ) right paranthesis
{0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x6060,0x70e0,0x39c0,0x1f80,0xfff0,0xfff0,0x1f80,0x39c0,0x70e0,0x6060}, // * asterisk
{0x0000,0x0000,0x0000,0x0600,0x0600,0x0600,0x0600,0x0600,0xfff0,0xfff0,0x0600,0x0600,0x0600,0x0600,0x0600,0x0000}, // + plus sign
{0x0000,0x3800,0x3c00,0x0e00,0x0e00,0x0e00,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000}, // , comma
{0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0xfff0,0xfff0,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000}, // - hyphen
{0x0000,0x0000,0x0700,0x0700,0x0700,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000}, // . period
{0x0000,0x0000,0x0000,0xc000,0xe000,0x7000,0x3800,0x1c00,0x0e00,0x0700,0x0380,0x01c0,0x00e0,0x0070,0x0030,0x0000}, // / forward slash
 
{0x0000,0x0000,0x1f80,0x3fc0,0x70e0,0xf870,0xd830,0xcc30,0xce30,0xc730,0xc330,0xc1b0,0xe1f0,0x70e0,0x3fc0,0x1f80}, // 0
{0x0000,0x0000,0xfff0,0xfff0,0x0600,0x0600,0x0600,0x0600,0x0600,0x0600,0x0600,0x6600,0x7600,0x3e00,0x1e00,0x0e00}, // 1
{0x0000,0x0000,0xfff0,0xfff0,0xc000,0xc000,0xc000,0xc000,0xfff0,0xfff0,0x0030,0x0030,0x0030,0x0030,0xfff0,0xfff0}, // 2
{0x0000,0x0000,0xfff0,0xfff0,0x0030,0x0030,0x0030,0x0030,0x0ff0,0x0ff0,0x0030,0x0030,0x0030,0x0030,0xfff0,0xfff0}, // 3
{0x0000,0x0000,0x0180,0x0180,0x0180,0x0180,0x0180,0x0180,0xfff0,0xfff0,0x7180,0x3980,0x1d80,0x0f80,0x0780,0x0380}, // 4
{0x0000,0x0000,0xfff0,0xfff0,0x0030,0x0030,0x0030,0x0030,0xfff0,0xfff0,0xc000,0xc000,0xc000,0xc000,0xfff0,0xfff0}, // 5
{0x0000,0x0000,0xfff0,0xfff0,0xc030,0xc030,0xc030,0xc030,0xfff0,0xfff0,0xc000,0xc000,0xc000,0xc000,0xfff0,0xfff0}, // 6
{0x0000,0x0000,0xc000,0xe000,0x7000,0x3800,0x1c00,0x0e00,0x0700,0x0380,0x01c0,0x00e0,0xc070,0xc030,0xfff0,0xfff0}, // 7
{0x0000,0x0000,0x3fc0,0x7fe0,0x6060,0xc030,0xc030,0x6060,0x3fc0,0x7fe0,0x6060,0xc030,0xc030,0x6060,0x7fe0,0x3fc0}, // 8
{0x0000,0x0000,0xfff0,0xfff0,0x0030,0x0030,0x0030,0x0030,0xfff0,0xfff0,0xc030,0xc030,0xc030,0xc030,0xfff0,0xfff0}, // 9
 
{0x0000,0x0000,0x0700,0x0700,0x0700,0x0000,0x0000,0x0000,0x0700,0x0700,0x0700,0x0000,0x0000,0x0000,0x0000,0x0000}, // : colon
{0x0000,0x1e00,0x1f00,0x0700,0x0700,0x0000,0x0000,0x0000,0x0700,0x0700,0x0700,0x0000,0x0000,0x0000,0x0000,0x0000}, // ; semi colon
{0x0000,0x0000,0x00c0,0x01c0,0x0380,0x0700,0x0e00,0x1c00,0x3800,0x3800,0x1c00,0x0e00,0x0700,0x0380,0x01c0,0x00c0}, // < left arrow
{0x0000,0x0000,0x0000,0x0000,0x0000,0x7fe0,0x7fe0,0x0000,0x0000,0x0000,0x0000,0x7fe0,0x7fe0,0x0000,0x0000,0x0000}, // = equal
{0x0000,0x0000,0x3000,0x3800,0x1c00,0x0e00,0x0700,0x0380,0x01c0,0x01c0,0x0380,0x0700,0x0e00,0x1c00,0x3800,0x3000}, // > right arrow
{0x0000,0x0000,0x0600,0x0600,0x0000,0x0600,0x0600,0x0700,0x0380,0x01c0,0x00e0,0x0060,0x3060,0x38e0,0x1fc0,0x0f80}, // ? question mark
{0x0000,0x0000,0x3fe0,0x7fe0,0xe000,0xc000,0xcfe0,0xcff0,0xcdb0,0xcdb0,0xcfb0,0xcfb0,0xc030,0xe070,0x7fe0,0x3fc0}, // @ at
 
{0x0000,0x0000,0xc030,0xc030,0xc030,0xc030,0xc030,0xfff0,0xfff0,0xc030,0xc030,0xe070,0x70e0,0x39c0,0x1f80,0x0f00}, // A
{0x0000,0x0000,0xffc0,0xffe0,0xc070,0xc030,0xc070,0xc0e0,0xffc0,0xffc0,0xc0e0,0xc070,0xc030,0xc070,0xffe0,0xffc0}, // B
{0x0000,0x0000,0x1f80,0x3fc0,0x70e0,0xe070,0xc030,0xc000,0xc000,0xc000,0xc000,0xc030,0xe070,0x70e0,0x3fc0,0x1f80}, // C
{0x0000,0x0000,0xff80,0xffc0,0xc0e0,0xc070,0xc030,0xc030,0xc030,0xc030,0xc030,0xc030,0xc070,0xc0e0,0xffc0,0xff80}, // D
{0x0000,0x0000,0xfff0,0xfff0,0xc000,0xc000,0xc000,0xc000,0xffc0,0xffc0,0xc000,0xc000,0xc000,0xc000,0xfff0,0xfff0}, // E
{0x0000,0x0000,0xc000,0xc000,0xc000,0xc000,0xc000,0xc000,0xff80,0xff80,0xc000,0xc000,0xc000,0xc000,0xfff0,0xfff0}, // F
{0x0000,0x0000,0x3fc0,0x7fe0,0xe070,0xc030,0xc030,0xc3f0,0xc3f0,0xc000,0xc000,0xc000,0xc030,0xe070,0x7fe0,0x3fc0}, // G
{0x0000,0x0000,0xc030,0xc030,0xc030,0xc030,0xc030,0xc030,0xfff0,0xfff0,0xc030,0xc030,0xc030,0xc030,0xc030,0xc030}, // H
{0x0000,0x0000,0xfff0,0xfff0,0x0600,0x0600,0x0600,0x0600,0x0600,0x0600,0x0600,0x0600,0x0600,0x0600,0xfff0,0xfff0}, // I
{0x0000,0x0000,0x3c00,0x7e00,0xe700,0xc300,0xc300,0xc300,0x0300,0x0300,0x0300,0x0300,0x0300,0x0300,0xfff0,0xfff0}, // J
{0x0000,0x0000,0xc070,0xc0f0,0xc1c0,0xc380,0xc700,0xce00,0xfc00,0xfc00,0xce00,0xc700,0xc380,0xc1c0,0xc0f0,0xc070}, // K
{0x0000,0x0000,0xfff0,0xfff0,0xc000,0xc000,0xc000,0xc000,0xc000,0xc000,0xc000,0xc000,0xc000,0xc000,0xc000,0xc000}, // L
{0x0000,0x0000,0xc030,0xc030,0xc030,0xc030,0xc030,0xc030,0xc030,0xc630,0xcf30,0xdfb0,0xf9f0,0xf0f0,0xe070,0xc030}, // M
{0x0000,0x0000,0xc030,0xc030,0xc070,0xc0f0,0xc1f0,0xc3b0,0xc730,0xce30,0xdc30,0xf830,0xf030,0xe030,0xc030,0xc030}, // N
{0x0000,0x0000,0x1F80,0x3FC0,0x70E0,0xE070,0xC030,0xC030,0xC030,0xC030,0xC030,0xC030,0xE070,0x70E0,0x3FC0,0x1F80}, // O
{0x0000,0x0000,0xc000,0xc000,0xc000,0xc000,0xc000,0xff80,0xffc0,0xc0e0,0xc070,0xc030,0xc070,0xc0e0,0xffc0,0xff80}, // P
{0x0000,0x0000,0x1fb0,0x3ff0,0x70e0,0xe1f0,0xc3b0,0xc730,0xc630,0xc030,0xc030,0xc030,0xe070,0x70e0,0x3fc0,0x1f80}, // Q
{0x0000,0x0000,0xc030,0xc070,0xc0e0,0xc1c0,0xc380,0xff00,0xffc0,0xc0e0,0xc070,0xc030,0xc070,0xc0e0,0xffc0,0xff80}, // R
{0x0000,0x0000,0xffc0,0xffe0,0x0070,0x0030,0x0030,0x0070,0x3fe0,0x7fc0,0xe000,0xc000,0xc000,0xe000,0x7ff0,0x3ff0}, // S
{0x0000,0x0000,0x0600,0x0600,0x0600,0x0600,0x0600,0x0600,0x0600,0x0600,0x0600,0x0600,0x0600,0x0600,0xfff0,0xfff0}, // T
{0x0000,0x0000,0x3fc0,0x7fe0,0xe070,0xc030,0xc030,0xc030,0xc030,0xc030,0xc030,0xc030,0xc030,0xc030,0xc030,0xc030}, // U
{0x0000,0x0000,0x0600,0x1f80,0x39c0,0x70e0,0xe070,0xc030,0xc030,0xc030,0xc030,0xc030,0xc030,0xc030,0xc030,0xc030}, // V
{0x0000,0x0000,0x39c0,0x7fe0,0xef70,0xc630,0xc630,0xc630,0xc630,0xc630,0xc630,0xc030,0xc030,0xc030,0xc030,0xc030}, // W
{0x0000,0x0000,0xc030,0xc030,0xe070,0x70e0,0x39c0,0x1f80,0x0f00,0x0f00,0x1f80,0x39c0,0x70e0,0xe070,0xc030,0xc030}, // X
{0x0000,0x0000,0x0600,0x0600,0x0600,0x0600,0x0600,0x0600,0x0600,0x0600,0x0f00,0x1f80,0x39c0,0x70e0,0xe070,0xc030}, // Y
{0x0000,0x0000,0xfff0,0xfff0,0xe000,0x7000,0x3800,0x1c00,0x0e00,0x0700,0x0380,0x01c0,0x00e0,0x0070,0xfff0,0xfff0}, // Z
 
{0x0000,0x0000,0x3fc0,0x3fc0,0x3800,0x3800,0x3800,0x3800,0x3800,0x3800,0x3800,0x3800,0x3800,0x3800,0x3fc0,0x3fc0}, // [ left bracket
{0x0000,0x0000,0x0000,0x0030,0x0070,0x00e0,0x01c0,0x0380,0x0700,0x0e00,0x1c00,0x3800,0x7000,0xe000,0xc000,0x0000}, // \ back slash
{0x0000,0x0000,0x3fc0,0x3fc0,0x01c0,0x01c0,0x01c0,0x01c0,0x01c0,0x01c0,0x01c0,0x01c0,0x01c0,0x01c0,0x3fc0,0x3fc0}, // ] right bracket
{0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0xc030,0xe070,0x70e0,0x39c0,0x1f80,0x0f00,0x0600}, // ^ carrot
{0x0000,0x0000,0xfff0,0xfff0,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000}, // _ underscore
{0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x01c0,0x03c0,0x0380,0x0380,0x0380}, // ' left single quote
 
{0x0000,0x0000,0x7fb0,0xfff0,0xc060,0xc060,0xffe0,0x7fe0,0x0060,0x0060,0x7fe0,0x7fc0,0x0000,0x0000,0x0000,0x0000}, // a
{0x0000,0x0000,0xffc0,0xffe0,0x3070,0x3030,0x3030,0x3030,0x3070,0x3fe0,0x3fc0,0x3000,0x3000,0x3000,0xf000,0xf000}, // b
{0x0000,0x0000,0x3f00,0x7f80,0xe1c0,0xc0c0,0xc000,0xc000,0xc0c0,0xe1c0,0x7f80,0x3f00,0x0000,0x0000,0x0000,0x0000}, // c
{0x0000,0x0000,0x3fb0,0x7ff0,0xe0c0,0xc0c0,0xc0c0,0xc0c0,0xe0c0,0x7fc0,0x3fc0,0x00c0,0x00c0,0x00c0,0x00f0,0x00f0}, // d
{0x0000,0x0000,0x3fe0,0x7fe0,0xe000,0xc000,0xffe0,0xfff0,0xc030,0xe030,0x7ff0,0x3fe0,0x0000,0x0000,0x0000,0x0000}, // e
{0x0000,0x0000,0xff00,0xff00,0x3000,0x3000,0x3000,0x3000,0xfe00,0xfe00,0x3000,0x3000,0x3060,0x38e0,0x1fc0,0x0f80}, // f
{0x0000,0x0000,0x7f80,0x7fc0,0x00e0,0x0060,0x7fe0,0xffe0,0xc060,0xc060,0xfff0,0x7fb0,0x0000,0x0000,0x0000,0x0000}, // g
{0x0000,0x0000,0xf030,0xf030,0x3030,0x3030,0x3030,0x3030,0x3830,0x3e70,0x37e0,0x33c0,0x3000,0x3000,0xf000,0xf000}, // h
{0x0000,0x0000,0x1f80,0x1f80,0x0600,0x0600,0x0600,0x0600,0x0600,0x0e00,0x0e00,0x0000,0x0000,0x0600,0x0600,0x0000}, // i
//{0x0000,0x0000,0x3f00,0x7f80,0x61c0,0xc0c0,0xc0c0,0x00c0,0x00c0,0x00c0,0x00c0,0x00c0,0x0000,0x0000,0x00c0,0x00c0}, // j
{0x0000,0x0000,0x1e00,0x3f00,0x7380,0x6180,0x6180,0x0180,0x0180,0x0180,0x0180,0x0180,0x0000,0x0000,0x0180,0x0180}, // j another style
{0x0000,0x0000,0x3830,0x3870,0x18e0,0x19c0,0x1f80,0x1f80,0x19c0,0x18e0,0x1870,0x1830,0x1800,0x1800,0x3800,0x3800}, // k
{0x0000,0x0000,0x0f00,0x0f00,0x0600,0x0600,0x0600,0x0600,0x0600,0x0600,0x0600,0x0600,0x0600,0x0600,0x0e00,0x0e00}, // l
{0x0000,0x0000,0xc030,0xc030,0xc030,0xc630,0xcf30,0xdfb0,0xf9f0,0xf0f0,0xe070,0xc030,0x0000,0x0000,0x0000,0x0000}, // m
//{0x0000,0x0000,0xc030,0xc030,0xc030,0xc030,0xc030,0xc630,0xcf30,0xdfb0,0xf9f0,0xf0e0,0x0000,0x0000,0x0000,0x0000}, // m, another style, not as good
{0x0000,0x0000,0xc0c0,0xc0c0,0xc0c0,0xc0c0,0xc0c0,0xc0c0,0xc0c0,0xc1c0,0xff80,0xff00,0x0000,0x0000,0x0000,0x0000}, // n
{0x0000,0x0000,0x3f00,0x7f80,0xe1c0,0xc0c0,0xc0c0,0xc0c0,0xc0c0,0xe1c0,0x7f80,0x3f00,0x0000,0x0000,0x0000,0x0000}, // o
{0x0000,0x0000,0xfc00,0xfc00,0x3000,0x3fc0,0x3fe0,0x3060,0x3060,0x3060,0xffe0,0xffc0,0x0000,0x0000,0x0000,0x0000}, // p
{0x0000,0x0000,0x03f0,0x03f0,0x00c0,0x7fc0,0xffc0,0xc0c0,0xc0c0,0xc0c0,0xfff0,0x7fb0,0x0000,0x0000,0x0000,0x0000}, // q
{0x0000,0x0000,0xfc00,0xfc00,0x3000,0x3000,0x3000,0x3000,0x3060,0x30e0,0xffc0,0xdf80,0x0000,0x0000,0x0000,0x0000}, // r
{0x0000,0x0000,0xffe0,0xfff0,0x0030,0x0030,0x7ff0,0xffe0,0xc000,0xe000,0x7ff0,0x3ff0,0x0000,0x0000,0x0000,0x0000}, // s
{0x0000,0x0000,0x0700,0x0f80,0x0dc0,0x0cc0,0x0c00,0x0c00,0x0c00,0x0c00,0x7f80,0x7f80,0x0c00,0x0c00,0x0c00,0x0c00}, // t
{0x0000,0x0000,0x3f70,0x7ff0,0xe1c0,0xc0c0,0xc0c0,0xc0c0,0xc0c0,0xc0c0,0xc0c0,0xc0c0,0x0000,0x0000,0x0000,0x0000}, // u
{0x0000,0x0000,0x0f00,0x1f80,0x39c0,0x70e0,0xe070,0xc030,0xc030,0xc030,0xc030,0xc030,0x0000,0x0000,0x0000,0x0000}, // v
{0x0000,0x0000,0x39c0,0x7fe0,0xef70,0xc630,0xc630,0xc630,0xc030,0xc030,0xc030,0xc030,0x0000,0x0000,0x0000,0x0000}, // w
{0x0000,0x0000,0x6060,0x70e0,0x39c0,0x1f80,0x0f00,0x0f00,0x1f80,0x39c0,0x70e0,0x6060,0x0000,0x0000,0x0000,0x0000}, // x
{0x0000,0x0000,0xffe0,0xfff0,0x0030,0x3fb0,0x7ff0,0xe070,0xc030,0xc030,0xc030,0xc030,0x0000,0x0000,0x0000,0x0000}, // y
{0x0000,0x0000,0xfff0,0xfff0,0xf030,0x3c00,0x0f00,0x03c0,0x00e0,0xc070,0xfff0,0xfff0,0x0000,0x0000,0x0000,0x0000}, // z
 
{0x0000,0x0000,0x01c0,0x03c0,0x0700,0x0600,0x0600,0x0e00,0x3c00,0x3c00,0x0e00,0x0600,0x0600,0x0700,0x03c0,0x01c0}, // { left bracket
{0x0000,0x0000,0x0600,0x0600,0x0600,0x0600,0x0600,0x0000,0x0000,0x0000,0x0000,0x0600,0x0600,0x0600,0x0600,0x0600}, // | or sign
{0x0000,0x0000,0x0e00,0x0f00,0x0380,0x0180,0x0180,0x0180,0x00f0,0x00f0,0x0180,0x0180,0x0180,0x0380,0x0f00,0x0e00}, // } right bracket
{0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0xc300,0xe780,0x7fc0,0x3ce0,0x1860}, // ~ tilde
 
};