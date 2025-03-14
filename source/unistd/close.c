#include "sys/types.h"
#include "syscall.h"

int close(fd_t fd) {
    return __syscall1(SYS_close, fd);
}
