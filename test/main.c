#include "io/stdio.h"
#include "string/string.h"
#include "environ/environ.h"
#include "errno/errno.h"
#include "stddef.h"


extern char **__environ;

int main(void) {
    const char *home = getenv("HOME");
    write(STDOUT_FILENO, home, strlen(home));
    return 0;
}
