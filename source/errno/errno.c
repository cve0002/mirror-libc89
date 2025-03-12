#include "errno/errno.h"
#include "errno/errnos.h"

errno_t *__errno_location(void) {
    static int __errno = -1;
    return &__errno;
}
