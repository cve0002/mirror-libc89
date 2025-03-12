#ifndef _LIBC_H
#define _LIBC_H

#define __weak_alias(name, alias_name) \
extern __typeof(name) alias_name __attribute__((weak, alias(#name)));

#endif /* _LIBC_H */
