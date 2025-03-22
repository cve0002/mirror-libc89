#ifndef _LIBC_H
#define _LIBC_H

#include <stddef.h>

extern struct libc_t {
    size_t *auxv;
} _libc;

#define __weak_alias(name, alias_name) \
extern __typeof(name) __attribute__((weak, alias(#name))) alias_name

#endif /* _LIBC_H */
