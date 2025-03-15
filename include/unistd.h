#ifndef __UNISTD_H__
#define __UNISTD_H__

#include "sys/types.h"
#include "stddef.h"


/* I/O */
int write(fd_t fd, const char *s, size_t len);
int read(fd_t fd, char *buf, size_t len);
/* I/O */


/* filesystem */
void sync(void);
int syncfs(fd_t file_fd);
int fsync(fd_t fd);
int fdatasync(fd_t fd);

int close(fd_t fd);

int chdir(const char *path);
int fchdir(fd_t fd);

int mkdir(const char *path, mode_t mode);
int rmdir(const char *path);

char *getcwd(char *buf, size_t size);

int link(const char *oldpath, const char *newpath);
int symlink(const char *oldpath /* target, src */, const char *newpath /* linkpath, dest */);
int unlink(const char *path);
ssize_t readlink(const char *path, char *buf, size_t bufsiz);

int chown(const char *path, uid_t owner, gid_t group);
int fchown(fd_t fd, uid_t owner, gid_t group);
int lchown(const char *path, uid_t owner, gid_t group);
/* filesystem */


/* {gs}et{preseug}id() */
pid_t getpid(void);
pid_t getppid(void);

int getresuid(uid_t *ruid, uid_t *euid, uid_t *suid);
int setresuid(uid_t ruid, uid_t euid, uid_t suid);
int getresgid(uid_t *rgid, uid_t *egid, uid_t *sgid);
int setresgid(uid_t rgid, uid_t egid, uid_t sgid);

int setreuid(uid_t ruid, uid_t euid);
int setregid(uid_t rgid, uid_t egid);

uid_t getuid(void);
int setuid(uid_t);
uid_t geteuid(void);
int seteuid(uid_t);

uid_t getgid(void);
int setgid(uid_t);
uid_t getegid(void);
int setegid(uid_t);
/* {gs}et{preseug}id() */


#endif /* __UNISTD_H__ */
