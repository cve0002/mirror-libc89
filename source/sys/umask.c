#include "sys/stat.h"
#include "sys/types.h"
#include "syscall.h"

mode_t umask(mode_t mode) {
    return __syscall1(SYS_umask, mode);
}

mode_t getumask(void) {
    mode_t mask = umask(0);
    (void) umask(mask);
    return mask;
}
