#ifndef __unp_sock_ntop_host_h
#define __unp_sock_ntop_host_h
#include <sys/socket.h>

char *
sock_ntop_host(const struct sockaddr *sa, socklen_t salen);

char *
Sock_ntop_host(const struct sockaddr *sa, socklen_t salen);

#endif
