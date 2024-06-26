#define __CTYPE_HAS_8_BIT_LOCALES		1

#define __LOCALE_DATA_Cctype_IDX_SHIFT	3
#define __LOCALE_DATA_Cctype_IDX_LEN		16
#define __LOCALE_DATA_Cctype_ROW_LEN		4
#define __LOCALE_DATA_Cctype_PACKED		1

#define __LOCALE_DATA_Cuplow_IDX_SHIFT	3
#define __LOCALE_DATA_Cuplow_IDX_LEN		16
#define __LOCALE_DATA_Cuplow_ROW_LEN		8

#define __LOCALE_DATA_Cc2wc_IDX_LEN		16
#define __LOCALE_DATA_Cc2wc_IDX_SHIFT		3
#define __LOCALE_DATA_Cc2wc_ROW_LEN		8

typedef struct {
	unsigned char idx8ctype[16];
	unsigned char idx8uplow[16];
	unsigned char idx8c2wc[16];
	unsigned char idx8wc2c[38];
} __codeset_8_bit_t;

#ifdef WANT_DATA

static const __codeset_8_bit_t codeset_8_bit[2] = {
	{ /* ASCII */
		/* idx8ctype data */
		{    0,    0,    0,    0,    0,    0,    0,    0,
		     0,    0,    0,    0,    0,    0,    0,    0, },
		/* idx8uplow data */
		{    0,    0,    0,    0,    0,    0,    0,    0,
		     0,    0,    0,    0,    0,    0,    0,    0, },
		/* idx8c2wc data */
		{    0,    0,    0,    0,    0,    0,    0,    0,
		     0,    0,    0,    0,    0,    0,    0,    0, },
		/* idx8wc2c data */
		{    0,    0,    0,    0,    0,    0,    0,    0,
		     0,    0,    0,    0,    0,    0,    0,    0,
		     0,    0,    0,    0,    0,    0,    0,    0,
		     0,    0,    0,    0,    0,    0,    0,    0,
		     0,    0,    0,    0,    0,    0, }
	},
	{ /* ISO-8859-1 */
		/* idx8ctype data */
		{  0x1,  0x1,  0x1,  0x1,  0x2,  0x3,  0x4,  0x3,
		   0x5,  0x5,  0x6,  0x7,  0x8,  0x8,  0x9,  0x8, },
		/* idx8uplow data */
		{    0,    0,    0,    0,    0,    0,    0,    0,
		   0x1,  0x1,  0x2,  0x2,  0x1,  0x1,  0x2,  0x2, },
		/* idx8c2wc data */
		{  0x1,  0x2,  0x3,  0x4,  0x5,  0x6,  0x7,  0x8,
		   0x9,  0xa,  0xb,  0xc,  0xd,  0xe,  0xf, 0x10, },
		/* idx8wc2c data */
		{  0x1,    0,    0,    0,    0,    0,    0,    0,
		     0,    0,    0,    0,    0,    0,    0,    0,
		     0,    0,    0,    0,    0,    0,    0,    0,
		     0,    0,    0,    0,    0,    0,    0,    0,
		     0,    0,    0,    0,    0,    0, }
	},
};

#endif /* WANT_DATA */

#define __LOCALE_DATA_Cwc2c_DOMAIN_MAX	0x25ff
#define __LOCALE_DATA_Cwc2c_TI_SHIFT		4
#define __LOCALE_DATA_Cwc2c_TT_SHIFT		4
#define __LOCALE_DATA_Cwc2c_II_LEN		38
#define __LOCALE_DATA_Cwc2c_TI_LEN		32
#define __LOCALE_DATA_Cwc2c_TT_LEN		144


#define __LOCALE_DATA_Cwc2c_TBL_LEN		176
#ifdef WANT_DATA

static const unsigned char __LOCALE_DATA_Cwc2c_data[176] = {
	/* ti_table */
	    0,    0,    0,    0,    0,    0,    0,    0,
	    0,    0,    0,    0,    0,    0,    0,    0,
	    0,    0,    0,    0,    0,    0,    0,    0,
	  0x1,  0x2,  0x3,  0x4,  0x5,  0x6,  0x7,  0x8,
	/* tt_table */
	    0,    0,    0,    0,    0,    0,    0,    0,
	    0,    0,    0,    0,    0,    0,    0,    0,
	 0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87,
	 0x88, 0x89, 0x8a, 0x8b, 0x8c, 0x8d, 0x8e, 0x8f,
	 0x90, 0x91, 0x92, 0x93, 0x94, 0x95, 0x96, 0x97,
	 0x98, 0x99, 0x9a, 0x9b, 0x9c, 0x9d, 0x9e, 0x9f,
	 0xa0, 0xa1, 0xa2, 0xa3, 0xa4, 0xa5, 0xa6, 0xa7,
	 0xa8, 0xa9, 0xaa, 0xab, 0xac, 0xad, 0xae, 0xaf,
	 0xb0, 0xb1, 0xb2, 0xb3, 0xb4, 0xb5, 0xb6, 0xb7,
	 0xb8, 0xb9, 0xba, 0xbb, 0xbc, 0xbd, 0xbe, 0xbf,
	 0xc0, 0xc1, 0xc2, 0xc3, 0xc4, 0xc5, 0xc6, 0xc7,
	 0xc8, 0xc9, 0xca, 0xcb, 0xcc, 0xcd, 0xce, 0xcf,
	 0xd0, 0xd1, 0xd2, 0xd3, 0xd4, 0xd5, 0xd6, 0xd7,
	 0xd8, 0xd9, 0xda, 0xdb, 0xdc, 0xdd, 0xde, 0xdf,
	 0xe0, 0xe1, 0xe2, 0xe3, 0xe4, 0xe5, 0xe6, 0xe7,
	 0xe8, 0xe9, 0xea, 0xeb, 0xec, 0xed, 0xee, 0xef,
	 0xf0, 0xf1, 0xf2, 0xf3, 0xf4, 0xf5, 0xf6, 0xf7,
	 0xf8, 0xf9, 0xfa, 0xfb, 0xfc, 0xfd, 0xfe, 0xff,
};

#endif /* WANT_DATA */

#define __LOCALE_DATA_Cuplow_TBL_LEN		24

#ifdef WANT_DATA


static const unsigned char __LOCALE_DATA_Cuplow_data[24] = {
	    0,    0,    0,    0,    0,    0,    0,    0,
	 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0,
	 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0,    0,
};

#endif /* WANT_DATA */

#define __LOCALE_DATA_Cctype_TBL_LEN		40

#ifdef WANT_DATA


static const unsigned char __LOCALE_DATA_Cctype_data[40] = {
	    0,    0,    0,    0,
	 0xee, 0xee, 0xee, 0xee,
	 0x66, 0x66, 0x66, 0x66,
	 0x66, 0x62, 0x66, 0x66,
	 0x66, 0x66, 0x26, 0x66,
	 0x44, 0x44, 0x44, 0x44,
	 0x44, 0x44, 0x44, 0x64,
	 0x44, 0x44, 0x44, 0x24,
	 0x22, 0x22, 0x22, 0x22,
	 0x22, 0x22, 0x22, 0x62,
};

#endif /* WANT_DATA */

#define __LOCALE_DATA_Cc2wc_TBL_LEN		136

#ifdef WANT_DATA


static const unsigned short __LOCALE_DATA_Cc2wc_data[136] = {
	      0,      0,      0,      0,      0,      0,      0,      0,
	   0x80,   0x81,   0x82,   0x83,   0x84,   0x85,   0x86,   0x87,
	   0x88,   0x89,   0x8a,   0x8b,   0x8c,   0x8d,   0x8e,   0x8f,
	   0x90,   0x91,   0x92,   0x93,   0x94,   0x95,   0x96,   0x97,
	   0x98,   0x99,   0x9a,   0x9b,   0x9c,   0x9d,   0x9e,   0x9f,
	   0xa0,   0xa1,   0xa2,   0xa3,   0xa4,   0xa5,   0xa6,   0xa7,
	   0xa8,   0xa9,   0xaa,   0xab,   0xac,   0xad,   0xae,   0xaf,
	   0xb0,   0xb1,   0xb2,   0xb3,   0xb4,   0xb5,   0xb6,   0xb7,
	   0xb8,   0xb9,   0xba,   0xbb,   0xbc,   0xbd,   0xbe,   0xbf,
	   0xc0,   0xc1,   0xc2,   0xc3,   0xc4,   0xc5,   0xc6,   0xc7,
	   0xc8,   0xc9,   0xca,   0xcb,   0xcc,   0xcd,   0xce,   0xcf,
	   0xd0,   0xd1,   0xd2,   0xd3,   0xd4,   0xd5,   0xd6,   0xd7,
	   0xd8,   0xd9,   0xda,   0xdb,   0xdc,   0xdd,   0xde,   0xdf,
	   0xe0,   0xe1,   0xe2,   0xe3,   0xe4,   0xe5,   0xe6,   0xe7,
	   0xe8,   0xe9,   0xea,   0xeb,   0xec,   0xed,   0xee,   0xef,
	   0xf0,   0xf1,   0xf2,   0xf3,   0xf4,   0xf5,   0xf6,   0xf7,
	   0xf8,   0xf9,   0xfa,   0xfb,   0xfc,   0xfd,   0xfe,   0xff,
};

#endif /* WANT_DATA */


#define __LOCALE_DATA_NUM_CODESETS		2
#define __LOCALE_DATA_CODESET_LIST \
	"\x03\x09" \
	"\0" \
	"ASCII\0" \
	"ISO-8859-1\0"

#define __CTYPE_HAS_CODESET_ASCII
#define __CTYPE_HAS_CODESET_ISO_8859_1
#define __CTYPE_HAS_CODESET_UTF_8
