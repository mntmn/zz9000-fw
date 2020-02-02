enum zz_video_modes {
	ZZVMODE_1280x720,
	ZZVMODE_800x600,
	ZZVMODE_640x480,
	ZZVMODE_1024x768,
	ZZVMODE_1280x1024,
	ZZVMODE_1920x1080_60,
	ZZVMODE_720x576,		// 50Hz
	ZZVMODE_1920x1080_50,	// 50Hz
	ZZVMODE_720x480,
	ZZVMODE_640x512,
	ZZVMODE_NUM,
};

struct zz_video_mode {
	int hres, vres;
	int hstart, hend, hmax;
	int vstart, vend, vmax;
	int polarity;
	int mhz, phz, vhz;
	int hdmi;
};

struct zz_video_mode preset_video_modes[ZZVMODE_NUM] = {
	//	HRES		VRES	HSTART	HEND	HMAX	VSTART	VEND	VMAX	POLARITY	MHZ		PIXELCLOCK HZ	VERTICAL HZ		HDMI
	{	1280,		720,	1390,	1430,	1650,	725,	730,	750,	0,			75,		75000000,		60,				0 },
	{	800,		600,	840,	968,	1056,	601,	605,	628,	0,			40,		40000000,		60,				0 },
	{	640,		480,	656,	752,	800,	490,	492,	525,	0,			25,		25000000,		60,				0 },
	{	1024,		768,	1048,	1184,	1344,	771,	777,	806, 	0,			65,		65000000,		60,				0 },
	{	1280,		1024,	1328,	1440,	1688,	1025,	1028,	1066,	0,			108,  	108000000,		60,				0 },
	{	1920,		1080,	2008,	2052,	2200,	1084,	1089,	1125,	0,			150,	150000000,		60,				0 },
	{	720,		576,	732,	796,	864,	581,	586,	625,	1,			27,		27000000,		50,				0 },
	{	1920,		1080,	2448,	2492,	2640,	1084,	1089,	1125,	0,			150,	150000000,		50,				0 },
	{	720,		480,	720,	752,	800,	490,	492,	525,	0,			25,		25000000,		60,				0 },
	{	640,		512,	840,	968,	1056,	601,	605,	628,	0,			40,		40000000,		60,				0 },
};
