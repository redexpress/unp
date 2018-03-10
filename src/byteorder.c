#include <stdio.h>

#define CPU_VENDOR_OS "Darwin Kernel Version 16.6.0"

int
main(int argc, char **argv)
{
    union {
        short  s;
        char   c[sizeof(short)];
    } un;
    
    un.s = 0x0102;
    printf("%s: ", CPU_VENDOR_OS);
    if (sizeof(short) == 2) {
        if (un.c[0] == 1 && un.c[1] == 2)
            printf("big-endian\n");
        else if (un.c[0] == 2 && un.c[1] == 1)
            printf("little-endian\n");
        else
            printf("unknown\n");
    } else
        printf("sizeof(short) = %lu\n", sizeof(short));
    
    return 0;
}

