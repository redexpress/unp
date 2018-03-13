#include    "dg_echo.h"
#include "unp_wrapsock.h"
#include "unp_wrapstdio.h"
#include "unp_wraplib.h"
#include <string.h>

void
dg_cli(FILE *fp, int sockfd, const SA *pservaddr, socklen_t servlen)
{
    ssize_t n;
    char    sendline[MAXLINE], recvline[MAXLINE + 1];
    
    while (Fgets(sendline, MAXLINE, fp) != NULL) {
        
        Sendto(sockfd, sendline, strlen(sendline), 0, pservaddr, servlen);
        
        n = Recvfrom(sockfd, recvline, MAXLINE, 0, NULL, NULL);
        
        recvline[n] = 0;    /* null terminate */
        Fputs(recvline, stdout);
    }
}
