#include "sys/types.h"
#include "syscall.h"


int mkdir(const char *path, mode_t mode) {
    return __syscall2(SYS_mkdir, (uintptr_t) path, mode);
}

int rmdir(const char *path) {
    return __syscall1(SYS_rmdir, (uintptr_t) path);
}
