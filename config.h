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
	[SchemePrompt] = { "#002B36", "#CB4B16" },
	[SchemeNormal] = { "#93A1A1", "#002B36" },
	[SchemeSelect] = { "#002B36", "#CB4B16" },
	[SchemeDesc]   = { "#002B36", "#CB4B16" }
};
