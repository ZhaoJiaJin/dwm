static char norm_fg[] = "#eee8d5";
static char norm_bg[] = "#073642";
static char norm_border[] = "#6c7c80";

static char sel_fg[] = "#eee8d5";
static char sel_bg[] = "#859900";
static char sel_border[] = "#eee8d5";

static char urg_fg[] = "#eee8d5";
static char urg_bg[] = "#dc322f";
static char urg_border[] = "#dc322f";

static char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_bg},  // the focused win
    [SchemeHid] =  { urg_fg,      urg_bg,    urg_border },
};
