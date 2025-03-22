#ifndef __MALLOC_H__
#define __MALLOC_H__

#include <stddef.h>


#ifndef _LIBC_MALLOC_ALLOCATION_ALIGNMENT
    #define _LIBC_MALLOC_ALLOCATION_ALIGNMENT 16
#endif 
#define MEM_ALIGN_SIZE(size, alignment) (((size) + (alignment) - 1) & ~((alignment) - 1))


void free(void *);
void *malloc(size_t);
void *realloc(void *, size_t);
void *calloc(size_t n, size_t size);


/* Fastest and most unsafe */
struct __szdynptr;
typedef struct __szdynptr szdp_t;

struct __szdynptr *szdp_init(void);

#define szdp_ptr(_szdp_ptr, type) ((type) szdp_get_ptr(_szdp_ptr))
void *szdp_get_ptr(struct __szdynptr *);    /* get raw allocated pointer */
size_t szdp_get_len(struct __szdynptr *);   /* get only pointer aligned len */
size_t szdp_get_size(struct __szdynptr *);  /* get_szdp_len() + sizeof(szdp_t) */

void szdp_free(struct __szdynptr *);
void *szdp_malloc(struct __szdynptr *, size_t len);
void *szdp_realloc(struct __szdynptr *, size_t len);
void *szdp_calloc(struct __szdynptr *, size_t n, size_t size);


#endif /* __MALLOC_H__ */
