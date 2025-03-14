#include "sys/types.h"
#include "syscall.h"
#include "stdint.h"


int getresuid(uid_t *ruid, uid_t *euid, uid_t *suid) {
    return __syscall3(SYS_getresuid, (uintptr_t) ruid, (uintptr_t) euid, (uintptr_t) suid);
}

int setresuid(uid_t ruid, uid_t euid, uid_t suid) {
    return __syscall3(SYS_setresuid, ruid, euid, suid);
}

int getresgid(uid_t *rgid, uid_t *egid, uid_t *sgid) {
    return __syscall3(SYS_getresgid, (uintptr_t) rgid, (uintptr_t) egid, (uintptr_t) sgid);
}

int setresgid(uid_t rgid, uid_t egid, uid_t sgid) {
    return __syscall3(SYS_setresgid, rgid, egid, sgid);
}


int setreuid(uid_t ruid, uid_t euid) {
    return __syscall2(SYS_setreuid, ruid, euid);
}

int setregid(uid_t rgid, uid_t egid) {
    return __syscall2(SYS_setregid, rgid, egid);
}


uid_t getuid(void) {
    return __syscall0(SYS_getuid);
}

int setuid(uid_t uid) {
    return __syscall1(SYS_setuid, uid);
}

uid_t geteuid(void) {
    return __syscall0(SYS_geteuid);
}

int seteuid(uid_t euid) {
    return setreuid(getuid(), euid);
}

uid_t getgid(void) {
    return __syscall0(SYS_getgid);
}

int setgid(uid_t gid) {
    return __syscall1(SYS_setgid, gid);
}

uid_t getegid(void) {
    return __syscall0(SYS_getegid);
}

int setegid(uid_t egid) {
    return setregid(getgid(), egid);
}
