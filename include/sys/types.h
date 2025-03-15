#ifndef __SYS_TYPES_H__
#define __SYS_TYPES_H__


#ifndef ssize_t
    #include "arch/arch.h"
    #include "stdint.h"

    #define ssize_t ssize_t

    #ifdef _LIBC_ARCH_BITS_64
        typedef int64_t ssize_t;
    #elif defined(_LIBC_ARCH_BITS_32)
        typedef int32_t ssize_t;
    #endif
#endif


typedef unsigned int    fd_t;       /* file descriptor number */
typedef int             id_t;       /* general id type */
typedef id_t            pid_t;      /* process id */
typedef id_t            uid_t;      /* user id */
typedef id_t            gid_t;      /* group id */
typedef int             signo_t;    /* signal number */
typedef int             flags_t;    /* general flags type */
typedef int             mode_t;     /* file mode */


#endif /* __SYS_TYPES_H__ */
