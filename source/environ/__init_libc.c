#include <stdint.h>
#include <progname.h>
#include <_internal/libc.h>


struct libc_t _libc = {
    (size_t *) NULL /* auxv */,
};


char **__environ = NULL;

extern void __setfullprogname(const char *);


void __init_libc(uintptr_t rsp_content) {
    size_t _argc = *(size_t *) rsp_content;
    const char **_argv = (const char **) (rsp_content + 8);
    const char *_argv0 = *_argv;
    size_t i;

    /* +8(argc), *8(argv) +8(NULL) */
    __environ = (char **) (rsp_content + 8 + 8 * _argc + 8);
    
    for (i = 0; __environ[i]; i++);
    _libc.auxv = (void *) (__environ + i + 1);

    __setfullprogname(_argv0);
    setprogname(_argv0);
}
