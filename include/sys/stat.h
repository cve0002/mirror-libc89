#ifndef __SYS_STAT_H__
#define __SYS_STAT_H__

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


#define S_IFMT      0170000     /* type of file */

#define S_IFDIR     0040000     /* directory */
#define S_IFCHR     0020000     /* character special */
#define S_IFBLK     0060000     /* block special */
#define S_IFREG     0100000     /* regular */
#define S_IFIFO     0010000     /* FIFO special */
#define S_IFLNK     0120000     /* symbolic link */
#define S_IFSOCK    0140000     /* socket */

#define S_ISDIR(mode)  (((mode) & S_IFMT) == S_IFDIR)
#define S_ISCHR(mode)  (((mode) & S_IFMT) == S_IFCHR)
#define S_ISBLK(mode)  (((mode) & S_IFMT) == S_IFBLK)
#define S_ISREG(mode)  (((mode) & S_IFMT) == S_IFREG)
#define S_ISFIFO(mode) (((mode) & S_IFMT) == S_IFIFO)
#define S_ISLNK(mode)  (((mode) & S_IFMT) == S_IFLNK)
#define S_ISSOCK(mode) (((mode) & S_IFMT) == S_IFSOCK)

#define S_ISUID     04000   /* set-user-ID on execution */
#define S_ISGID     02000   /* set-group-ID on execution */
#define S_ISVTX     01000   /* on directories, restricted deletion flag */
#define S_IRUSR     00400   /* read permission, owner */
#define S_IWUSR     00200   /* write permission, owner */
#define S_IXUSR     00100   /* execute/search permission, owner */
#define S_IRWXU     00700   /* read, write, execute/search by owner */
#define S_IRGRP     00040   /* read permission, group */
#define S_IWGRP     00020   /* write permission, group */
#define S_IXGRP     00010   /* execute/search permission, group */
#define S_IRWXG     00070   /* read, write, execute/search by group */
#define S_IROTH     00004   /* read permission, others */
#define S_IWOTH     00002   /* write permission, others */
#define S_IXOTH     00001   /* execute/search permission, others */
#define S_IRWXO     00007   /* read, write, execute/search by others */

/* #define _S_READ_N   4
#define _S_WRITE_N  2
#define _S_EXEC_N   1 */

#endif /* __SYS_STAT_H__ */
