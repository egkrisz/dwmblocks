//Modify this file to change what commands output to your statusbar, and recompile using the make command.
//

#define PATH(name) "/home/apex/scripts/statusbar/"#name

static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"",        PATH(wifi),           30,            0},
	{"",        PATH(volume),         0,             10},
	{"",        PATH(battery),        10,            0},
	{"",        PATH(clock),          30,            0},
	{"",        PATH(keylayout),      0,             9},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " ";
static unsigned int delimLen = 5;
