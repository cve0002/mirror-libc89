#ifndef __UNISTD_H__
#define __UNISTD_H__

#include "sys/types.h"
#include "stddef.h"


/* I/O */
extern int write(fd_t fd, const char *s, size_t len);
extern int read(fd_t fd, char *buf, size_t len);
/* I/O */


/* filesystem */
extern void sync(void);
/* filesystem */


/* process */
extern pid_t getpid(void);
extern pid_t getppid(void);
/* process */


#endif /* __UNISTD_H__ */
