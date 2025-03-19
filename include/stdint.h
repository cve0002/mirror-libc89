#ifndef __STDINT_H__
#define __STDINT_H__

#include <arch/arch.h>
#include <bits/stdint.h>
#include <assert.h>
#include <stddef.h>


static_assert(sizeof(int8_t) == (8 / 8),    "sizeof(int8_t) must be equal 8/8 bytes");
static_assert(sizeof(int16_t) == (16 / 8),  "sizeof(int16_t) must be equal 16/8 bytes");
static_assert(sizeof(int32_t) == (32 / 8),  "sizeof(int32_t) must be equal 32/8 bytes");
static_assert(sizeof(int64_t) == (64 / 8),  "sizeof(int64_t) must be equal 64/8 bytes");

static_assert(sizeof(uint8_t) == (8 / 8),   "sizeof(uint8_t) must be equal 8/8 bytes");
static_assert(sizeof(uint16_t) == (16 / 8), "sizeof(uint16_t) must be equal 16/8 bytes");
static_assert(sizeof(uint32_t) == (32 / 8), "sizeof(uint32_t) must be equal 32/8 bytes");
static_assert(sizeof(uint64_t) == (64 / 8), "sizeof(uint64_t) must be equal 64/8 bytes");


#ifndef uintptr_t
    #define uintptr_t uintptr_t
    typedef __typeof(sizeof(char *)) uintptr_t;
#endif

#ifndef intptr_t
    #define intptr_t intptr_t
    #if _LIBC_ARCH_BITS_64
        typedef int64_t intptr_t;
    #elif _LIBC_ARCH_BITS_32
        typedef int32_t intptr_t;
    #endif
#endif


#define INT8_MAX    0x7f
#define INT8_MIN    (-INT8_MAX - 1)
#define UINT8_MAX   0xff

#define INT16_MAX   0x7fff
#define INT16_MIN   (-INT16_MAX - 1)
#define UINT16_MAX  0xffff

#define INT32_MAX   0x7fffffff
#define INT32_MIN   (-INT32_MAX - 1)
#define UINT32_MAX  0xffffffff

#define INT64_MAX   0x7fffffffffffffff
#define INT64_MIN   (-INT64_MAX - 1)
#define UINT64_MAX  0xffffffffffffffff
#define UINT64_MXB  0b1111111111111111111111111111111111111111111111111111111111111111


#define PTRDIFF_MAX ((ptrdiff_t) (~((ptrdiff_t) 0) >> 1))
#define PTRDIFF_MIN (-PTRDIFF_MAX - 1)


#endif /* __STDINT_H__ */
