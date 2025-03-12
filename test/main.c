#include "io/stdio.h"
#include "string/string.h"
#include "environ/environ.h"
#include "errno/errno.h"
#include "stddef.h"

int main(void) {
    const char *home;

    home = getenv("HOME");
    write(STDOUT_FILENO, home, strlen(home));
    write(STDOUT_FILENO, "\n", 1);
    
    perror(NULL);
    
    return 0;
}
