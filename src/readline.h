/* include unph */
/* Our own header.  Tabs are set for 4 spaces, not 8 */

#ifndef    __unp_readline_h
#define    __unp_readline_h

#include "unp_defs.h"
#include <stddef.h>
#include <sys/types.h>

ssize_t
Readline(int fd, void *ptr, size_t maxlen);

#endif
