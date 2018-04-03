#ifndef __unp_host_serv_h
#define __unp_host_serv_h

struct addrinfo *
host_serv(const char *host, const char *serv, int family, int socktype);

struct addrinfo *
Host_serv(const char *host, const char *serv, int family, int socktype);

#endif
