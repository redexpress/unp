#include	"str_cli.h"
#include "unp_wrapunix.h"
#include "unp_wrapsock.h"
#include "unp_wraplib.h"
#include "unp_wrapstdio.h"
#include "writen.h"
#include "readline.h"

void
str_cli(FILE *fp, int sockfd)
{
	char	sendline[MAXLINE], recvline[MAXLINE];

	while (Fgets(sendline, MAXLINE, fp) != NULL) {

		Writen(sockfd, sendline, strlen(sendline));

		if (Readline(sockfd, recvline, MAXLINE) == 0)
			err_quit("str_cli: server terminated prematurely");

		Fputs(recvline, stdout);
	}
}
