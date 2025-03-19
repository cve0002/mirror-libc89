#include <syscall.h>
#include <sys/mman.h>

void *mmap(void *addr, size_t size, int prot, int flags, int fd, off_t offset) {
    intptr_t p = __syscall6(SYS_mmap, (uintptr_t) addr, size, prot, flags, fd, offset);
    return (p < 0) ? MAP_FAILED : ((void *) p);
}

int munmap(void *addr, size_t size) {
    return __syscall2(SYS_munmap, (uintptr_t) addr, size);
}
