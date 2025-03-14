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
extern int close(fd_t fd);
/* filesystem */


extern pid_t getpid(void);
extern pid_t getppid(void);

extern int getresuid(uid_t *ruid, uid_t *euid, uid_t *suid);
extern int setresuid(uid_t ruid, uid_t euid, uid_t suid);
extern int getresgid(uid_t *rgid, uid_t *egid, uid_t *sgid);
extern int setresgid(uid_t rgid, uid_t egid, uid_t sgid);

extern int setreuid(uid_t ruid, uid_t euid);
extern int setregid(uid_t rgid, uid_t egid);

extern uid_t getuid(void);
extern int setuid(uid_t);
extern uid_t geteuid(void);
extern int seteuid(uid_t);

extern uid_t getgid(void);
extern int setgid(uid_t);
extern uid_t getegid(void);
extern int setegid(uid_t);


#endif /* __UNISTD_H__ */
