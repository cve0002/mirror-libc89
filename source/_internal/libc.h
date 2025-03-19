#ifndef _LIBC_H
#define _LIBC_H

/* struct libc_t {} _libc; */

#define __weak_alias(name, alias_name) \
extern __typeof(name) __attribute__((weak, alias(#name))) alias_name

#endif /* _LIBC_H */
