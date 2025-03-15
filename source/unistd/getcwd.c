#include <stddef.h>
#include <stdint.h>
#include <syscall.h>


char *getcwd(char *buf, size_t size) {
    return (__syscall2(SYS_getcwd, (uintptr_t) buf, size) < 0) ? NULL : buf;
}
