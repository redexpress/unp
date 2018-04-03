/* include checkopts1 */
/* *INDENT-OFF* */
#include    "unp_defs.h"
#include "unp_wrapsock.h"
#include "unp_wrapunix.h"
#include "unp_wraplib.h"
#include "strings.h"
#include "dg_cli.h"

int
main(int argc, char **argv)
{
    int                    sockfd;
    struct sockaddr_in    servaddr;
    
    if (argc != 2)
        err_quit("usage: udpcli01 <IPaddress>");
    
    bzero(&servaddr, sizeof(servaddr));
    servaddr.sin_family = AF_INET;
    servaddr.sin_port = htons(SERV_PORT);
    Inet_pton(AF_INET, argv[1], &servaddr.sin_addr);
    
    sockfd = Socket(AF_INET, SOCK_DGRAM, 0);
    
    dg_cli(stdin, sockfd, (SA *) &servaddr, sizeof(servaddr));
    
    exit(0);
}