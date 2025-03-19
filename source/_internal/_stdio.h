#ifndef __STDIO_H
#define __STDIO_H

#include <sys/types.h>

struct _IO_FILE {
    fd_t fd;
    int flags;
    mode_t mode;
};

typedef struct _IO_FILE FILE;

#endif
