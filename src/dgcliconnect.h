#ifndef __unp_dgcliconnect_h
#define __unp_dgcliconnect_h

#include <stdio.h>
#include "unp_defs.h"
#include <sys/socket.h>

void
dg_cli(FILE *fp, int sockfd, const SA *pservaddr, socklen_t servlen);

#endif
