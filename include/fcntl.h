#ifndef __FCNTL_H__
#define __FCNTL_H__

#include "sys/types.h"
#include "stdint.h"

#define AT_FDCWD -100

extern int open(const char *path, flags_t flags, ... /* mode_t mode */);
extern int openat(fd_t dirfd, const char *path, flags_t flags, ... /* mode_t mode */);
extern int creat(const char *path, mode_t mode);

extern int fcntl(fd_t fd, int op, usize arg);

#endif /* __FCNTL_H__ */
