/* These issues are related to something wrt timing with the
   controller used by the hhkb alt controller:

   https://github.com/qmk/qmk_firmware/issues/1256

   Defining IGNORE_MOD_TAP_INTERRUPT makes it possible to do rolling
   combos (zx) with keys that convert to other keys on hold (z becomes
   ctrl when you hold it, and when this option isn't enabled, z
   rapidly followed by x actually sends Ctrl-x. That's bad.)
*/
#define IGNORE_MOD_TAP_INTERRUPT yes
#undef TAPPING_TERM
#define TAPPING_TERM 150
#define RETRO_TAPPING yes
#define PERMISSIVE_HOLD yes
#undef NO_AUTO_SHIFT_SPECIAL
