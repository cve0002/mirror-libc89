#include "syscall.h"

void sync(void) {
    (void) __syscall0(SYS_sync);
}
