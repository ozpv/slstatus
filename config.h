/* See LICENSE file for copyright and license details. */

/* interval between updates (in ms) */
const unsigned int interval = 1000;

/* text to show if no value can be retrieved */
static const char unknown_str[] = "n/a";

/* maximum output string length */
#define MAXLEN 2048

static const struct arg args[] = {
    /* function format          argument */

    /* WIFI { netspeed_rx, "%sB/s", "wlp3s0" }, */

    { netspeed_rx, "[ %s B/s ]",    "enp4s0" },
    { run_command, "[ %s ]",        "volume" },
    { ram_perc,    "[  %s%% ]",    NULL },
    { datetime,    "  %s",         "%a %b %d %r" },
};
