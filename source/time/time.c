#include <syscall.h>
#include <time.h>


time_t time(time_t *tloc) {
    return (time_t) __syscall1(SYS_time, (uintptr_t) tloc);
}
