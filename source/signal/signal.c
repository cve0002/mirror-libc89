#include "syscall.h"
#include "sys/types.h"

int kill(pid_t pid, signo_t sig) {
    return __syscall2(SYS_kill, pid, sig);
}
