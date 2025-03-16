#ifndef __SYS_STAT_H__
#define __SYS_STAT_H__


#include <sys/types.h>


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

#define _S_DEFDIR   0776 /* drwxr-sr-- */
#define _S_DEFFILE  0644 /* .rw-r--r-- */
#define _S_DEFXFILE 0755 /* .rwxr-xr-x */

/* 
#define _S_READ_N   4
#define _S_WRITE_N  2
#define _S_EXEC_N   1 
*/


int chmod(const char *path, mode_t mode);
int fchmod(fd_t fd, mode_t mode);

mode_t umask(mode_t);
mode_t getumask(void);

#endif /* __SYS_STAT_H__ */
