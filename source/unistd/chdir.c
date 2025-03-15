#include <sys/types.h>
#include <syscall.h>


int chdir(const char *path) {
    return __syscall1(SYS_chdir, (uintptr_t) path);
}

int fchdir(fd_t fd) {
    return __syscall1(SYS_fchdir, fd);
}
