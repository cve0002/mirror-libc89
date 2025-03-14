#ifndef __FCNTL_H__
#define __FCNTL_H__

#include "sys/types.h"

#define AT_FDCWD -100

extern int open(const char *path, flags_t flags, ...);
extern int openat(fd_t dirfd, const char *path, flags_t flags, ...);
extern int creat(const char *path, mode_t mode);

extern int close(fd_t fd);

#endif /* __FCNTL_H__ */
