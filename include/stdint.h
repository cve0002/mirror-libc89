#ifndef __STDINT_H__
#define __STDINT_H__

#include <arch/arch.h>
#include <assert.h>
#include <stddef.h>


#ifndef uintptr_t
    #define uintptr_t uintptr_t
    typedef __typeof(sizeof(char *)) uintptr_t;
#endif

#ifndef isize
    #define isize isize
    typedef long isize;
#endif

#ifndef usize
    #define usize usize
    typedef __typeof(sizeof(0)) usize;
#endif

#ifndef byte_t
    #define byte_t byte_t
    typedef unsigned char byte_t;
#endif


#define PTRDIFF_MAX ((ptrdiff_t) (~((ptrdiff_t) 0) >> 1))
#define PTRDIFF_MIN (-PTRDIFF_MAX - 1)


#if 0
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


typedef int8_t int_least8_t;
typedef uint8_t uint_least8_t;
typedef int16_t int_least16_t;
typedef uint16_t uint_least16_t;
typedef int32_t int_least32_t;
typedef uint32_t uint_least32_t;
typedef int64_t int_least64_t;
typedef uint64_t uint_least64_t;
#endif

#endif /* __STDINT_H__ */
