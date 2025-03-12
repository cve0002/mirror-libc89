#ifndef __STDIO_H__
#define __STDIO_H__

#include "stdint.h"
#include "types.h"


#define STDIN_FILENO 0
#define STDOUT_FILENO 1
#define STDERR_FILENO 2

#define _IO_EOF (-1)
#define EOF _IO_EOF

extern int write(fd_t fd, const char *s, usize len);
extern int read(fd_t fd, char *buf, usize len);

#endif /* __STDIO_H__ */
