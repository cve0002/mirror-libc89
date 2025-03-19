#include <stddef.h>
#include <stdint.h>
#include <errno.h>
#include <sys/mman.h>
#include <stdbool.h>
#include <_internal/libc.h>


#define PAGESIZE 4096
#define SMALL_ALLOCATION_LIMIT PAGESIZE

#define MEMBLOCK_SIZE sizeof(struct __memblock)

struct __memblock {
    bool is_free;   /* is memory block now free for use */
    size_t psize;   /* user-needed allocated memory size */
    size_t tsize;   /* total aligned size */
    struct __memblock *next; /* next memory block */
} *__heaphead = NULL;


#if 0
static struct __memblock *find_free_memblock(size_t size) {
    struct __memblock *current = __heaphead;
    struct __memblock *prev = NULL;

    while (current) {
        if (current->is_free && current->psize >= size) {
            return current;
        }
        prev = current;
        current = current->next;
    }

    return NULL;
}
#endif

static void mark_memblock_used(struct __memblock *mblk) {
    mblk->is_free = 0;
}

static size_t alignbigsize(size_t size) {
    const size_t remsize = size % PAGESIZE;
    return (0 == remsize) ? size : (size + (PAGESIZE - remsize));
}

static size_t alignsmallsize(size_t size) {
    const size_t remsize = size % 16;
    if (0 == remsize) return size;
    return (remsize > 8) ? (size + 16 - remsize) : (size + 8 - remsize);
}


static struct __memblock *memblock_allocate_big(size_t psize) 
{
    const size_t totalsize = alignbigsize(psize + MEMBLOCK_SIZE);
    void *pmmap = mmap(NULL, totalsize, PROT_READ | PROT_WRITE, MAP_PRIVATE | MAP_ANONYMOUS, -1, 0);
    struct __memblock *block = NULL;

    if (MAP_FAILED == pmmap) return NULL;

    block = pmmap;
    block->psize = psize;
    block->tsize = totalsize;

    return block;
}


static struct __memblock *memblock_allocate_small(size_t psize) {
    const unused size_t totalsize = alignsmallsize(psize + MEMBLOCK_SIZE);
    return NULL;
}



void *__libc_malloc(size_t size) 
{
    struct __memblock *block = __heaphead;

    if (0 == size) return NULL;

    /* Various additions below will overflow if size is close to
        SIZE_MAX. Further, it's not legal for a C object to be
        larger than PTRDIFF_MAX (half of SIZE_MAX) as pointer
        arithmetic within it could overflow. (thanks klibc) */
    if (size > PTRDIFF_MAX) {
        errno = ENOMEM;
        return NULL;
    }

    if (block) {
        mark_memblock_used(block);
        return (void *) (block + 1);
    }

    if (size + MEMBLOCK_SIZE < SMALL_ALLOCATION_LIMIT) {
        block = memblock_allocate_small(size);
    } else {
        block = memblock_allocate_big(size);
    }

    return 0;
}

__weak_alias(__libc_malloc, malloc);
