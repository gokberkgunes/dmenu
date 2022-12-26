/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1; /* -b  option; if 0, dmenu appears at bottom */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Gohu GohuFont:pixelsize=14","Symbols Nerd Font:pixelsize=15"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*                           fg          bg       */
	[SchemeNorm]          = {  ENVCOLOR, "#222222" },
	[SchemeNormHighlight] = { "#FFFFFF", "#222222" }, /* Fuzzy highlight */
	[SchemeSel]           = { "#222222",  ENVCOLOR },
	[SchemeSelHighlight]  = { "#222222",  ENVCOLOR },
	[SchemeOut]           = { "#0000ff", "#ff0000" },
	[SchemeOutHighlight]  = { "#ff0000", "#0000ff" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
