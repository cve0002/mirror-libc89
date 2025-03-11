#include "syscall.h"


int main(void) {
    __syscall3(1, 1, (usize) (void *) "Hello, World!\n", 15);
    return 0;
}
