#ifndef _ALIAS_H
#define _ALIAS_H

#define weak_alias(name, alias_name) \
extern __typeof(name) alias_name __attribute__((weak, alias(#name)));

#endif /* _ALIAS_H */
