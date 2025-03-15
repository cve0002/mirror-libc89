#ifndef __STDINT_H__
#define __STDINT_H__

#include <arch/arch.h>
#include <bits/stdint.h>

#ifndef uintptr_t
    #define uintptr_t uintptr_t
    typedef __typeof(sizeof(char *)) uintptr_t;
#endif

#ifndef intptr_t
    #define intptr_t intptr_t
    #if _LIBC_ARCH_BITS_64 == 1
        typedef int64_t intptr_t;
    #elif _LIBC_ARCH_BITS_32 == 1
        typedef int32_t intptr_t;
    #endif
#endif

#endif /* __STDINT_H__ */
