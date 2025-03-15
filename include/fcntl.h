#ifndef __FCNTL_H__
#define __FCNTL_H__

#include "sys/types.h"
#include "stdint.h"


#define AT_FDCWD -100

#define O_RDONLY    0x000000    /* read only */
#define O_WRONLY    0x000001    /* write only */
#define O_RDWR      0x000002    /* read/write */
#define O_NONBLOCK  0x000004    /* non-blocking mode */
#define O_APPEND    0x000008    /* append on each write */
#define O_CREAT     0x000040    /* create file if it does not exist */
#define O_EXCL      0x000080    /* ensure that this call creates the file */
#define O_TRUNC     0x000200    /* truncate file to zero length if it exists */
#define O_DSYNC     0x000100    /* write operations complete when data is physically written */
#define O_RSYNC     0x000400    /* read operations complete when data is physically written */
#define O_SYNC      0x000800    /* write operations complete when data and metadata are physically written */
#define O_DIRECTORY 0x001000    /* open directory */
#define O_NOFOLLOW  0x002000    /* do not follow symbolic links */
#define O_CLOEXEC   0x004000    /* close on exec flag */
#define O_LARGEFILE 0x008000    /* allow opening files larger than 2GB */
#define O_TMPFILE   0x010000    /* create an unnamed temporary file */
#define O_ASYNC     0x000040    /* enable signal-driven I/O */
#define O_NOCTTY    0x008000    /* do not assign controlling terminal */
#define O_DIRECT    0x020000    /* minimize cache effects of I/O to and from the file */


int open(const char *path, flags_t flags, ... /* mode_t mode */);
int openat(fd_t dirfd, const char *path, flags_t flags, ... /* mode_t mode */);
int creat(const char *path, mode_t mode);

int fcntl(fd_t fd, int op, usize arg);


#endif /* __FCNTL_H__ */
