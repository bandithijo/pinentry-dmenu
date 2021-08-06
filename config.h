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
	[SchemePrompt] = { "#D4D4D3", "#005F87" },
	[SchemeNormal] = { "#D4D4D3", "#1E1E1E" },
	[SchemeSelect] = { "#D4D4D3", "#005F87" },
	[SchemeDesc]   = { "#D4D4D3", "#005F87" }
};
