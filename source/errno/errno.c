#include "errno/errno.h"
#include "_libc.h"
#include "errno/errnos.h"
#include "io/stdio.h"
#include "string/string.h"


static const char *__errmsg_arr[_ERRNOLAST + 1] = {
    #include "__strerror.h"
};

const char *strerror(int e) {
    if (e <= 0) return __errmsg_arr[0];
    return __errmsg_arr[e];
}


void __perror(const char *msg) {
    const char *errstr;
    if (msg) {
        write(STDERR_FILENO, msg, strlen(msg));
        write(STDERR_FILENO, ": ", 2);
    }
    errstr = strerror(errno);
    write(STDERR_FILENO, errstr, strlen(errstr));
    write(STDERR_FILENO, "\n", 1);
}

__weak_alias(__perror, perror);


errno_t *__errno_location(void) {
    static int __errno = -1;
    return &__errno;
}

