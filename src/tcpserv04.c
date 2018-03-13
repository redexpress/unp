#include "unp_defs.h"
#include "unp_wrapsock.h"
#include "unp_wrapunix.h"
#include "unp_signal.h"
#include "str_echo.h"
#include "sigchldwaitpid.h"
#include <netinet/in.h>
#include <sys/socket.h>
#include <strings.h>

int
main(int argc, char **argv)
{
    int                    listenfd, connfd;
    pid_t                childpid;
    socklen_t            clilen;
    struct sockaddr_in    cliaddr, servaddr;
    void                sig_chld(int);
    
    listenfd = Socket(AF_INET, SOCK_STREAM, 0);
    
    bzero(&servaddr, sizeof(servaddr));
    servaddr.sin_family      = AF_INET;
    servaddr.sin_addr.s_addr = htonl(INADDR_ANY);
    servaddr.sin_port        = htons(SERV_PORT);
    
    Bind(listenfd, (SA *) &servaddr, sizeof(servaddr));
    
    Listen(listenfd, LISTENQ);
    
    Signal(SIGCHLD, sig_chld);    /* must call waitpid() */
    
    for ( ; ; ) {
        clilen = sizeof(cliaddr);
        if ( (connfd = accept(listenfd, (SA *) &cliaddr, &clilen)) < 0) {
            if (errno == EINTR)
                continue;        /* back to for() */
            else
                err_sys("accept error");
        }
        
        if ( (childpid = Fork()) == 0) {    /* child process */
            Close(listenfd);    /* close listening socket */
            str_echo(connfd);    /* process the request */
            exit(0);
        }
        Close(connfd);            /* parent closes connected socket */
    }
}

