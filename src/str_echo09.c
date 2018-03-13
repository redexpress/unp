#include    "str_echo.h"
#include "unp_defs.h"
#include "unp_wrapsock.h"
#include "unp_wrapunix.h"
#include "writen.h"
#include "readn.h"
#include	"sum.h"

void
str_echo(int sockfd)
{
	ssize_t			n;
	struct args		args;
	struct result	result;

	for ( ; ; ) {
		if ( (n = Readn(sockfd, &args, sizeof(args))) == 0)
			return;		/* connection closed by other end */

		result.sum = args.arg1 + args.arg2;
		Writen(sockfd, &result, sizeof(result));
	}
}
