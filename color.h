static const char norm_fg[] = "#eee8d5";
static const char norm_bg[] = "#073642";
static const char norm_border[] = "#6c7c80";

static const char sel_fg[] = "#eee8d5";
static const char sel_bg[] = "#859900";
static const char sel_border[] = "#eee8d5";

static const char urg_fg[] = "#eee8d5";
static const char urg_bg[] = "#dc322f";
static const char urg_border[] = "#dc322f";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_bg},  // the focused win
    [SchemeHid] =  { urg_fg,      urg_bg,    urg_border },
};
