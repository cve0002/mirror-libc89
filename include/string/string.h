#ifndef __STRING_H__
#define __STRING_H__

#include "stddef.h"

extern size_t strlen(const char *);

extern const char *strchr(register const char *, int c);
extern const char *strrchr(register const char *, int c);

extern int strcmp(register const char *, register const char *);
extern int strncmp(register const char *, register const char *, register size_t n);

#endif /* __STRING_H__ */
