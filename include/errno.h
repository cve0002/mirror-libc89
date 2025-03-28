#ifndef __ERRNO_H__
#define __ERRNO_H__

#include <_errnos.h>

#ifndef errno_t
    #define errno_t errno_t
    typedef int errno_t;
#endif

extern errno_t *__errno_location(void);
#define errno (*__errno_location())

const char *strerror(int);
void perror(const char *msg);

#endif /* __ERRNO_H__ */
