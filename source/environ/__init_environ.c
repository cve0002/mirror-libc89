#include "stdint.h"
#include "_libc.h"

char **__environ;

void __init_environ(usize *rsp_ptr) {
    __environ = (char **) (rsp_ptr + 8 + ((*rsp_ptr) * 8));
}
