/* include unph */
/* Our own header.  Tabs are set for 4 spaces, not 8 */

#ifndef    __unp_dg_echo_h
#define    __unp_dg_echo_h

#include <stdio.h>
#include "unp_defs.h"
#include <sys/socket.h>

void
dg_echo(int sockfd, SA *pcliaddr, socklen_t clilen);

#endif /* dg_echo_h */
