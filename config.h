//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
    /*Icon*/	/*Command*/		    /*Update Interval*/	/*Update Signal*/
    {"",        "pacpackages",      3600,               3},
    {"",        "xkb-switch",       1,                  0},
    {"",        "disk",             10,                 4},
    {"",        "volume",           0,                  9},
    {"",        "battery",          5,                  6},
    {"",        "clock",            60,                 10},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char *delim = "|";
