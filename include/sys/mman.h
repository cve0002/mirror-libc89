#ifndef __MMAN_H__
#define __MMAN_H__

#include <stddef.h>
#include <sys/types.h>


/* Memory protection (int prot) */
#define PROT_NONE           0x0     /* no permissions */
#define PROT_READ           0x1     /* read permission */
#define PROT_WRITE          0x2     /* write permission */
#define PROT_EXEC           0x4     /* execute permission */

/* Flags */
#define MAP_SHARED          0x1
#define MAP_PRIVATE         0x2
#define MAP_SHARED_VALIDATE 0x3
#define MAP_FIXED           0x10
#define MAP_ANON            0x20
#define MAP_ANONYMOUS       MAP_ANON
#define MAP_GROWSDOWN       0x100
#define MAP_DENYWRITE       0x800   /* ignored flag */
#define MAP_EXECUTABLE      0x1000  /* ignored flag */
#define MAP_LOCKED          0x2000
#define MAP_NORESERVE       0x4000
#define MAP_POPULATE        0x8000
#define MAP_NONBLOCK        0x10000
#define MAP_STACK           0x20000
#define MAP_HUGETLB         0x40000
#define MAP_SYNC            0x80000
#define MAP_FILE            0x00000 /* ignored flag */
#define MAP_FIXED_NOREPLACE 0x100000


/* Huge pages */
#define MAP_HUGE_SHIFT  26
#define MAP_HUGE_16KB   (14 << MAP_HUGE_SHIFT)
#define MAP_HUGE_64KB   (16 << MAP_HUGE_SHIFT)
#define MAP_HUGE_512KB  (19 << MAP_HUGE_SHIFT)
#define MAP_HUGE_1MB    (20 << MAP_HUGE_SHIFT)
#define MAP_HUGE_2MB    (21 << MAP_HUGE_SHIFT)
#define MAP_HUGE_8MB    (23 << MAP_HUGE_SHIFT)
#define MAP_HUGE_16MB   (24 << MAP_HUGE_SHIFT)
#define MAP_HUGE_32MB   (25 << MAP_HUGE_SHIFT)
#define MAP_HUGE_256MB  (28 << MAP_HUGE_SHIFT)
#define MAP_HUGE_512MB  (29 << MAP_HUGE_SHIFT)
#define MAP_HUGE_1GB    (30 << MAP_HUGE_SHIFT)
#define MAP_HUGE_2GB    (31 << MAP_HUGE_SHIFT)
#define MAP_HUGE_16GB   (34U << MAP_HUGE_SHIFT)

#define MAP_FAILED ((void *) -1)


void *mmap(void *addr, size_t size, int prot, int flags, int fd, off_t offset);
int munmap(void *addr, size_t size);


#endif /* __MMAN_H__ */
