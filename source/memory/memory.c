#include "stdint.h"
#include "stddef.h"
#include "_libc.h"


void *__memset(void *dest, register uint8_t b, register size_t size) {
    register uint8_t *mem = (uint8_t *) dest;
    do {
        *mem++ = b;
    } while (--size > 0);
    return dest;
}
__weak_alias(__memset, memset);


void *__memcpy(void *dest, const void *src, register size_t size) {
    register uint8_t *dstmem = (uint8_t *) dest;
    register uint8_t *srcmem = (uint8_t *) src;
    do {
        *dstmem++ = *srcmem++;
    } while (--size > 0);
    return dest;
}
__weak_alias(__memcpy, memcpy);
