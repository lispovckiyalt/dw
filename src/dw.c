#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>

int
main(void)
{
    char* gp = getcwd(0x0, 0);

    if (gp != 0x0) { printf("%s\n", gp); free(gp); }
    else { printf("%s\n", strerror(errno)); return 1; }

    return 0;
}
