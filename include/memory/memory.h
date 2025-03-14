#ifndef __MEMORY_H__
#define __MEMORY_H__

#include "stddef.h"
#include "stdint.h"

extern void *memset(void *dest, register uint8_t val, register size_t size);
extern void *memcpy(void *dest, const void *src, register size_t size);

#endif /* __MEMORY_H__ */
