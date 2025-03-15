#include "sys/types.h"
#include "syscall.h"

void sync(void) {
    (void) __syscall0(SYS_sync);
}

int syncfs(fd_t fd) {
    return __syscall1(SYS_syncfs, fd);
}

int fsync(fd_t fd) {
    return __syscall1(SYS_fsync, fd);
}

int fdatasync(fd_t fd) {
    return __syscall1(SYS_fdatasync, fd);
}
