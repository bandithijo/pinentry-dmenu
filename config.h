/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int bottom   = 0;
static int embedded = 0;
static int minpwlen = 10;
static int mon      = 0;

static const char *asterisk = "#";
static const char *fonts[] = {
	"JetBrainsMono Nerd Font Bandit:style=Medium,Regular:size=8"
};
static const char *prompt = NULL;
static const char *colors[SchemeLast][4] = {
	[SchemePrompt] = { "#eeeeee", "#005f87" },
	[SchemeNormal] = { "#bbbbbb", "#1e1e1e" },
	[SchemeSelect] = { "#eeeeee", "#005f87" },
	[SchemeDesc]   = { "#eeeeee", "#005f87" }
};
