#include <sys/mman.h>
#include <stdint.h>
#include <stddef.h>
#include <memory.h>
#include <malloc.h>



void *__szmalloc(size_t size) {
    void *p;
    if (!size) return NULL;
    p = mmap(NULL, size, PROT_READ | PROT_WRITE, MAP_PRIVATE | MAP_ANONYMOUS, -1, 0);
    return MAP_FAILED == p ? NULL : p;
}

int __szfree(void *p, size_t size_in_bytes) {
    return munmap(p, size_in_bytes);
}

void *__szrealloc(void *p, size_t oldsize, size_t newsize) {
    void *pnew = NULL;
    if (!p || !oldsize) return __szmalloc(newsize);
    if (!(pnew = __szmalloc(newsize))) return NULL;
    memcpy(pnew, p, oldsize);
    __szfree(p, oldsize);
    return pnew;
}

void *__szcalloc(size_t n, size_t size) {
    const size_t total_size = n * size;
    void *p = __szmalloc(total_size);
    if (!p) return NULL;
    memset(p, 0, total_size);
    return p;
}


struct __szdynptr {
    void *_p;
    size_t _len;
};

struct __szdynptr *szdp_init(void) {
    struct __szdynptr *szdp = __szmalloc(sizeof(struct __szdynptr));
    if (!szdp) return NULL;
    szdp->_p = NULL;
    szdp->_len = 0;
    return szdp;
}

void *szdp_get_ptr(struct __szdynptr *szdp) {
    return szdp->_p;
}

size_t szdp_get_len(struct __szdynptr *szdp) {
    return szdp->_len;
}

size_t szdp_get_size(struct __szdynptr *szdp) {
    return szdp_get_len(szdp) + sizeof(struct __szdynptr);
}

void szdp_free(struct __szdynptr *szdp) {
    if (szdp->_p) {
        __szfree(szdp->_p, szdp->_len);
        szdp->_p = NULL;
    }
    szdp->_len = 0;
}

void *szdp_malloc(struct __szdynptr *szdp, size_t len) {
    const size_t remlen = len % 16;
    const size_t total_len = (0 == remlen) ? len : (len + 16 - remlen);
    szdp->_p = __szmalloc(total_len);
    if (!szdp->_p) {
        szdp->_len = 0;
        return NULL;
    }
    szdp->_len = total_len;
    return szdp->_p;
}

void *szdp_realloc(struct __szdynptr *szdp, size_t len) {
    const size_t remlen = len % 16;
    const size_t total_len = (0 == remlen) ? len : (len + 16 - remlen);
    void *psave = szdp->_p;
    szdp->_p = __szrealloc(psave, szdp->_len, total_len);
    if (!szdp->_p) {
        szdp->_p = psave;
        szdp_free(szdp);
        return NULL;
    }
    szdp->_len = total_len;
    return szdp->_p;
}

void *szdp_calloc(struct __szdynptr *szdp, size_t n, size_t size) {
    if (!szdp_malloc(szdp, n * size)) return NULL;
    memset(szdp->_p, 0, szdp->_len);
    return szdp->_p;
}
