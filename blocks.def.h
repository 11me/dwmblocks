//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"",     "cat /tmp/recordingicon 2>/dev/null",   0,     9},

	{"",     "weather",                             30,     0},

	{"",     "battery",                              0,     0},

	{"",     "volume",                               0,    10},

	{"",     "internet",                            10,     0},

	{"",     "datetime",                             5,     0},

	{"",     "xkb-switch -p",                        1,     0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
