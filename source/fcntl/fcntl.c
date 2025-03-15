#include <sys/types.h>
#include <stdint.h>
#include <syscall.h>

extern int fcntl(fd_t fd, int op, usize arg) {
    return __syscall3(SYS_fcntl, fd, op, arg);
}
