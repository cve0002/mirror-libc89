#include "errno/errno.h"
#include "errno/errnos.h"


static const char *__errmsg_arr[_ERRNOLAST + 1] = {
    #include "__strerror.h"
};

const char *strerror(int e) {
    if (e <= 0) return __errmsg_arr[0];
    return __errmsg_arr[e];
}

errno_t *__errno_location(void) {
    static int __errno = -1;
    return &__errno;
}
