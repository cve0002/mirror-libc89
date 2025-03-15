#ifndef __STDIO_H__
#define __STDIO_H__

#include <sys/types.h>


#define _IO_EOF (-1)
#define EOF _IO_EOF

#define STDIN_FILENO 0
#define STDOUT_FILENO 1
#define STDERR_FILENO 2

#define FILE FILE
typedef struct _IO_FILE FILE;


int rename(const char *oldpath, const char *newpath);


#endif /* __STDIO_H__ */
