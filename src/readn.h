/* include unph */
/* Our own header.  Tabs are set for 4 spaces, not 8 */

#ifndef    __unp_readn_h
#define    __unp_readn_h

#include "unp_defs.h"
#include <stddef.h>

ssize_t
Readn(int fd, void *ptr, size_t nbytes);

#endif
