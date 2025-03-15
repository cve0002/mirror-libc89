#include <sys/types.h>
#include <syscall.h>


int chmod(const char *path, mode_t mode) {
    return __syscall2(SYS_chmod, (uintptr_t) path, mode);
}

int fchmod(fd_t fd, mode_t mode) {
    return __syscall2(SYS_fchmod, fd, mode);
}
