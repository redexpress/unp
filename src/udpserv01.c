/* include checkopts1 */
/* *INDENT-OFF* */
#include    "unp_defs.h"
#include "unp_wrapsock.h"
#include "unp_wrapunix.h"
#include "strings.h"
#include "dg_echo.h"

int
main(int argc, char **argv)
{
    int                    sockfd;
    struct sockaddr_in    servaddr, cliaddr;
    
    sockfd = Socket(AF_INET, SOCK_DGRAM, 0);
    
    bzero(&servaddr, sizeof(servaddr));
    servaddr.sin_family      = AF_INET;
    servaddr.sin_addr.s_addr = htonl(INADDR_ANY);
    servaddr.sin_port        = htons(SERV_PORT);
    
    Bind(sockfd, (SA *) &servaddr, sizeof(servaddr));
    
    dg_echo(sockfd, (SA *) &cliaddr, sizeof(cliaddr));
}
