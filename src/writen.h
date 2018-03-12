/* include unph */
/* Our own header.  Tabs are set for 4 spaces, not 8 */

#ifndef    __unp_writen_h
#define    __unp_writen_h
#include "unp_defs.h"
#include <stddef.h>

void
Writen(int fd, void *ptr, size_t nbytes);

#endif
