#include <stdint.h>
#include <stddef.h>
#include <_internal/libc.h>


void *__memset(void *dest, register byte_t b, register size_t size) {
    register byte_t *mem = (byte_t *) dest;
    do {
        *mem++ = b;
    } while (--size > 0);
    return dest;
}
__weak_alias(__memset, memset);


void *__memcpy(void *dest, const void *src, register size_t size) {
    register byte_t *dstmem = (byte_t *) dest;
    register byte_t *srcmem = (byte_t *) src;
    do {
        *dstmem++ = *srcmem++;
    } while (--size > 0);
    return dest;
}
__weak_alias(__memcpy, memcpy);
