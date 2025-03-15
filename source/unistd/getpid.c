#include <sys/types.h>
#include <syscall.h>


pid_t getpid(void) {
    return __syscall0(SYS_getpid);
}

pid_t getppid(void) {
    return __syscall0(SYS_getppid);
}
