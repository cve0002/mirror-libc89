#include "sys/types.h"
#include "syscall.h"
#include "stddef.h"


int write(fd_t fd, const char *s, size_t len) {
    return __syscall3(SYS_write, fd, (usize) s, len);
}

int read(fd_t fd, char *buf, size_t len) {
    return __syscall3(SYS_read, fd, (usize) buf, len);
}
