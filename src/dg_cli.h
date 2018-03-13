/* include unph */
/* Our own header.  Tabs are set for 4 spaces, not 8 */

#ifndef    __unp_dg_cli_h
#define    __unp_dg_cli_h

#include <stdio.h>
#include "unp_defs.h"

void
dg_cli(FILE *fp, int sockfd, const SA *pservaddr, socklen_t servlen);

#endif /* dg_echo_h */
