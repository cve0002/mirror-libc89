#ifndef __STDINT_H__
#define __STDINT_H__

#include "arch.h"

#ifdef _LIBC_ARCH_BITS_64
#include "x86_64/include/_stdint.h"
#else
#error "Unsupported platform"
#endif

#ifndef uintptr_t
    #define uintptr_t uintptr_t
    typedef __typeof(sizeof(char *)) uintptr_t;
#endif

#ifndef intptr_t
    #define intptr_t intptr_t
    typedef __typeof(-sizeof(char *)) intptr_t;
#endif

#endif /* __STDINT_H__ */
