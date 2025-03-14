#ifndef __LIBC_ARCH_H__
#define __LIBC_ARCH_H__

#if defined(__x86_64__) || defined(__x86_64)
#define _LIBC_ARCH_BITS_64
#define _LIBC_ARCH_PLATFORM_AMD64
#elif defined(i386) || defined(__i386__) || defined(__i386)
#define _LIBC_ARCH_BITS_32
#define _LIBC_ARCH_PLATFORM_I386
#else
#define _LIBC_ARCH_BITS_UNKNOWN
#define _LIBC_ARCH_PLATFORM_UNKNOWN
#endif

#endif /* __LIBC_ARCH_H__ */
