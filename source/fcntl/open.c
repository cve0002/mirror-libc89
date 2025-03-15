#include <stdarg.h>
#include <fcntl.h>
#include <sys/types.h>
#include <syscall.h>


int open(const char *path, flags_t flags, ...) {
    mode_t mode = 0;

    if (flags & O_CREAT) {
        va_list va;
        va_start(va, flags);
        mode = va_arg(va, mode_t);
        va_end(va);
    }

    return __syscall3(SYS_open, (uintptr_t) path, flags, mode);
}

int openat(fd_t dirfd, const char *path, flags_t flags, ...) {
    mode_t mode = 0;

    if (flags & O_CREAT) {
        va_list va;
        va_start(va, flags);
        mode = va_arg(va, mode_t);
        va_end(va);
    }

    return __syscall4(SYS_openat, dirfd, (uintptr_t) path, flags, mode);
}

int creat(const char *path, mode_t mode) {
    return __syscall2(SYS_creat, (uintptr_t) path, mode);
    /* return open(path, O_WRONLY | O_CREAT | O_TRUNC, mode); */
}

