/* include unph */
/* Our own header.  Tabs are set for 4 spaces, not 8 */

#ifndef    __unp_signal_h
#define    __unp_signal_h

#include "unp_defs.h"

Sigfunc *
Signal(int signo, Sigfunc *func);

#endif
