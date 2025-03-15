#include "sys/types.h"
#include "syscall.h"

mode_t umask(mode_t mode) {
    return __syscall1(SYS_umask, mode);
}
