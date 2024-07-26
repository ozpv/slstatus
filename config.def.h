/* See LICENSE file for copyright and license details. */

/* interval between updates (in ms) */
const unsigned int interval = 1000;

/* text to show if no value can be retrieved */
static const char unknown_str[] = "n/a";

/* maximum output string length */
#define MAXLEN 2048

static const struct arg args[] = {
    /* function format          argument */

    /* run nmcli to get network device for say ethernet */ 
    { netspeed_rx, "[ %s B/s ]",    "wlp2s0" },
    { battery_perc,"[  %s%% ]",        "BAT0" },
    { run_command, "[ %s ]",        "volume" },
    { ram_perc,    "[  %s%% ]",    NULL },
    { datetime,    "  %s",         "%a %b %d %r" },
};
