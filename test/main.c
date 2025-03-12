#include "io/stdio.h"
#include "string/string.h"
#include "environ/environ.h"
#include "errno/errno.h"
#include "stddef.h"

int main(void) {
    const char *s;
    const char *home = getenv("HOME");
    write(STDOUT_FILENO, home, strlen(home));
    s = strerror(errno);
    write(STDOUT_FILENO, s, strlen(s));
    return 0;
}
