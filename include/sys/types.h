#ifndef __SYS_TYPES_H__
#define __SYS_TYPES_H__

#include <stdint.h>


#ifndef ssize_t
    #define ssize_t ssize_t
    typedef isize ssize_t;
#endif

typedef unsigned int    fd_t;       /* file descriptor number */
typedef int             id_t;       /* general id type */
typedef id_t            pid_t;      /* process id */
typedef id_t            uid_t;      /* user id */
typedef id_t            gid_t;      /* group id */
typedef int             signo_t;    /* signal number */
typedef int             mode_t;     /* file mode */
typedef isize        off_t;


#endif /* __SYS_TYPES_H__ */
