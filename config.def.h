/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int fuzzy = 1;                      /* -F  option; if 0, dmenu doesn't use fuzzy matching     */
static int instant = 1;
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"JetBrains Mono Medium:size=9:antialias=true:autohint=true",
  "Hack Nerd Font:pixelsize=10:antialias=true:autohint=true", // Powerline
  "Symbola:pixelsize=10:antialias=true:autohint=true" // Unicode
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#ebdbb2", "#1D2021" },
	[SchemeSel] = { "#ebdbb2", "#458588" },
	[SchemeSelHighlight] = { "#d79921", "#005577" },
	[SchemeNormHighlight] = { "#d79921", "#282828" },
	[SchemeOut] = { "#458588", "#282828" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;
static unsigned int lineheight = 25;         /* -h option; minimum height of a menu line     */

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
