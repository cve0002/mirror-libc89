#include "stddef.h"
#include "stdint.h"

char **__environ = NULL;

void __init_environ(uintptr_t rsp_ptr, size_t argc) {
    /* +8(argc), *8(argv) +8(NULL) */
    __environ = (char **) (rsp_ptr + 8 + 8 * argc + 8);
}
