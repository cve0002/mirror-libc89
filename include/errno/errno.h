#ifndef __ERRNO_H__
#define __ERRNO_H__

#include "errnos.h"
#include "stdint.h"

#ifndef errno_t
    #define errno_t errno_t
    typedef int errno_t;
#endif

extern errno_t *__errno_location(void);
#define errno (*__errno_location())

extern const char *strerror(int);

#endif /* __ERRNO_H__ */
