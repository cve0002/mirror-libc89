#include "stdint.h"
#include "errno/errnos.h"

static int __errno = ENOERR;

void __set_errno(usize _errno) {
    __errno = _errno;
}

int *__errno_location(void) {
    return &__errno;
}
