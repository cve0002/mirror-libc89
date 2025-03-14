#ifndef __SYS_TYPES_H__
#define __SYS_TYPES_H__

#ifndef ssize_t
    #define ssize_t ssize_t
    typedef __typeof(-sizeof(0)) ssize_t;
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
