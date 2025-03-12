#include "io/stdio.h"
#include "string/string.h"
#include "environ/environ.h"
#include "errno/errno.h"
#include "stddef.h"

int main(void) {
    const char *home = getenv("HOME");
    write(STDOUT_FILENO, home, strlen(home));
    write(STDOUT_FILENO, errno <= 0 ? "0" : "E", 1);
    return 0;
}
