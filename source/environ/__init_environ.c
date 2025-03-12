#include "stdint.h"

char **__environ;

void __init_environ(usize rsp_ptr, usize argc) {
    /* +8(argc), *8(argv) +8(NULL) */
    __environ = (char **) (rsp_ptr + 8 + 8 * argc + 8);
}
