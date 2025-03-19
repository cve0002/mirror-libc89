#ifndef __UNIMPLEMENTED_H__
#define __UNIMPLEMENTED_H__

#include <stddef.h>

#define unimplemented(msg) __unimplemented_L((msg), __LINE__)
#define __unimplemented_L(msg, line) __unimplemented_LL((msg), line)
#define __unimplemented_LL(msg, line) __unimplemented((msg), __FILE__, #line)
extern noreturn void __unimplemented(const char *msg, const char *file, const char *line);

#endif /* __UNIMPLEMENTED_H__ */
