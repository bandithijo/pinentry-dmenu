/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int bottom = 0;
static int embedded = 0;
static int minpwlen = 10;
static int mon = -1;

static const char *asterisk = "*";
static const char *fonts[] = {
	"FuraCode Nerd Font:style=Medium,Regular:size=8"
};
static const char *prompt = NULL;
static const char *colors[SchemeLast][4] = {
	[SchemePrompt] = { "#eeeeee", "#005577" },
	[SchemeNormal] = { "#bbbbbb", "#222222" },
	[SchemeSelect] = { "#eeeeee", "#005577" },
	[SchemeDesc]   = { "#eeeeee", "#005577" }
};
