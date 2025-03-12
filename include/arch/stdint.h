#ifndef __STDINT_H__
#define __STDINT_H__

#include "arch.h"

#ifdef _LIBC_ARCH_BITS_64
#include "x86_64/include/_stdint.h"
#else
#error "Unsupported platform"
#endif

#endif /* __STDINT_H__ */
