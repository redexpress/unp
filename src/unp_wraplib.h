/* include unph */
/* Our own header.  Tabs are set for 4 spaces, not 8 */

#ifndef	__unp_wraplib_h
#define	__unp_wraplib_h

#include "unp_error.h"
#include "unp_defs.h"
#include <arpa/inet.h>
#include <unistd.h>
#include <stdlib.h>
#include <errno.h>

const char		*Inet_ntop(int, const void *, char *, size_t);
void			 Inet_pton(int, const char *, void *);

#endif	/* __unp_h */
