#include "io/stdio.h"
#include "string/string.h"
#include "progname/progname.h"


int main(void) {
    const char *pn = __getprogname();
    write(STDOUT_FILENO, pn, strlen(pn));
    return 0;
}
