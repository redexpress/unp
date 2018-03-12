/* include unph */
/* Our own header.  Tabs are set for 4 spaces, not 8 */

#ifndef    __unp_defs_h
#define    __unp_defs_h

typedef long ssize_t;
typedef void Sigfunc(int);

/* Following could be derived from SOMAXCONN in <sys/socket.h>, but many
 kernels still #define it as 5, while actually supporting many more */
#define    LISTENQ        1024    /* 2nd argument to listen() */

/* Miscellaneous constants */
#define    MAXLINE        4096    /* max text line length */
#define    BUFFSIZE    8192    /* buffer size for reads and writes */

/* Define some port number that can be used for our examples */
#define    SERV_PORT         9877            /* TCP and UDP */
#define    SERV_PORT_STR    "9877"            /* TCP and UDP */
#define    UNIXSTR_PATH    "/tmp/unix.str"    /* Unix domain stream */
#define    UNIXDG_PATH        "/tmp/unix.dg"    /* Unix domain datagram */

/* Following shortens all the typecasts of pointer arguments: */
#define    SA    struct sockaddr

#define    FILE_MODE    (S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH)
/* default file access permissions for new files */
#define    DIR_MODE    (FILE_MODE | S_IXUSR | S_IXGRP | S_IXOTH)
/* default permissions for new directories */

#endif

