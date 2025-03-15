#include <syscall.h>

int rename(const char *oldpath, const char *newpath) {
    return __syscall2(SYS_rename, (uintptr_t) oldpath, (uintptr_t) newpath);
}
