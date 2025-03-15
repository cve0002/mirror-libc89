#ifndef __LIBC_ARCH_H__
#define __LIBC_ARCH_H__

#define _LIBC_ARCH_BITS_64 0
#define _LIBC_ARCH_PLATFORM_X86_64 0
#define _LIBC_ARCH_BITS_32 0
#define _LIBC_ARCH_PLATFORM_I386 0
#define _LIBC_ARCH_BITS_UNKNOWN 0
#define _LIBC_ARCH_PLATFORM_UNKNOWN 0

#if defined(__x86_64__) || defined(__x86_64)
    #undef _LIBC_ARCH_BITS_64
    #define _LIBC_ARCH_BITS_64 1
    #undef _LIBC_ARCH_PLATFORM_X86_64
    #define _LIBC_ARCH_PLATFORM_X86_64 1
#elif defined(i386) || defined(__i386__) || defined(__i386)
    #undef _LIBC_ARCH_BITS_32
    #define _LIBC_ARCH_BITS_32 1
    #undef _LIBC_ARCH_PLATFORM_I386
    #define _LIBC_ARCH_PLATFORM_I386 1
#else
    #undef _LIBC_ARCH_BITS_UNKNOWN
    #define _LIBC_ARCH_BITS_UNKNOWN 1
    #undef _LIBC_ARCH_PLATFORM_UNKNOWN
    #define _LIBC_ARCH_PLATFORM_UNKNOWN 1
    #error "Unsupported platform"
#endif

#endif /* __LIBC_ARCH_H__ */
