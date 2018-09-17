// TAPPING_TERM defines the duration of a "tap" where when exceeded,
// is not registered as a tap.
#undef  TAPPING_TERM
#define TAPPING_TERM 250
// When you hold a dual function key, and haven't pressed anything
// when you release the key, normally nothing happens. However, if you
// enable this, if you release the key without pressing another key,
// it will send the original key, even if it is outside of the tapping
// term.
#define RETRO_TAPPING yes
// This makes it easier for fast typists to use dual-function
// keys. Without this, if you let go of a held key inside the tapping
// term, it won't register.
#define PERMISSIVE_HOLD yes
// When a dual role key used for a modifier is quickly followed by
// another keys, it is interpreted as held even before the tapping
// term elapsed. This is a problem if a key is used for example inside
// a rolling combo because the second key will be pressed before the
// first key is released.
#define IGNORE_MOD_TAP_INTERRUPT
