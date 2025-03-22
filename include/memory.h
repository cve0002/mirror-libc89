#ifndef __MEMORY_H__
#define __MEMORY_H__

#include <stddef.h>
#include <stdint.h>

void *memset(void *dest, register byte_t val, register size_t size);
void *memcpy(void *dest, const void *src, register size_t size);

#endif /* __MEMORY_H__ */
