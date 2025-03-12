#include "stddef.h"
#include "string/string.h"
#include "_libc.h"

static const char *__progname = NULL;

void __setprogname(const char *name) {
    const char *last_slash = strrchr(name, '/');
    if (!last_slash) __progname = name;
    else __progname = last_slash + 1;
}

const char *__getprogname(void) {
    return __progname;
}


__weak_alias(__setprogname, setprogname);
__weak_alias(__getprogname, getprogname);
