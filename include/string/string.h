#ifndef __STRING_H__
#define __STRING_H__

#include "stddef.h"

size_t strlen(const char *);

const char *strchr(register const char *, int c);
const char *strrchr(register const char *, int c);

int strcmp(register const char *, register const char *);
int strncmp(register const char *, register const char *, register size_t n);

#endif /* __STRING_H__ */
