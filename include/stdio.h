#ifndef __STDIO_H__
#define __STDIO_H__

#include <stddef.h>


#define _IO_EOF (-1)
#define EOF _IO_EOF

#define STDIN_FILENO 0
#define STDOUT_FILENO 1
#define STDERR_FILENO 2

#define FILE FILE
typedef struct _IO_FILE FILE;


int rename(const char *oldpath, const char *newpath);


FILE *fopen(const char *path, const char *mode);
int fclose(FILE *);

size_t fread(char *buf, size_t size, size_t n, FILE *);
size_t fwrite(const char *buf, size_t size, size_t n, FILE *);

int feof(FILE *);
int ferror(FILE *);
void clearerr(FILE *);


#endif /* __STDIO_H__ */
