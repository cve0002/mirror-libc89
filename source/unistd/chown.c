#include <sys/types.h>
#include <syscall.h>


int chown(const char *path, uid_t owner, gid_t group) {
    return __syscall3(SYS_chown, (uintptr_t) path, owner, group);
}

int fchown(fd_t fd, uid_t owner, gid_t group) {
    return __syscall3(SYS_fchown, fd, owner, group);
}

int lchown(const char *path, uid_t owner, gid_t group) {
    return __syscall3(SYS_lchown, (uintptr_t) path, owner, group);
}
