#include <stddef.h>
#include <string.h>
#include <_internal/libc.h>

static const char *__progname = NULL;
static const char *__fullprogname = NULL;

void __setprogname(const char *name) {
    const char *last_slash = strrchr(name, '/');
    if (!last_slash) __progname = name;
    else __progname = last_slash + 1;
}

const char *__getprogname(void) {
    return __progname;
}

void __setfullprogname(const char *name) {
    __fullprogname = name;
}

const char *getfullprogname(void) {
    return __fullprogname;
}


__weak_alias(__setprogname, setprogname);
__weak_alias(__getprogname, getprogname);
