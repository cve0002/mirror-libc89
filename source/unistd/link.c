#include "stddef.h"
#include "syscall.h"


int link(const char *oldpath, const char *newpath) {
    return __syscall2(SYS_link, (uintptr_t) oldpath, (uintptr_t) newpath);
}

int symlink(const char *oldpath, const char *newpath) {
    return __syscall2(SYS_symlink, (uintptr_t) oldpath, (uintptr_t) newpath);
}

int unlink(const char *path) {
    return __syscall1(SYS_unlink, (uintptr_t) path);
}

int readlink(const char *path, char *buf, size_t bufsiz) {
    return __syscall3(SYS_readlink, (uintptr_t) path, (uintptr_t) buf, bufsiz);
}
