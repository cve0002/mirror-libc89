#ifndef __SYSCALL_H__
#define __SYSCALL_H__

#include "stdint.h"

extern int __syscall0(usize syscallN);
extern int __syscall1(usize syscallN, usize arg0);
extern int __syscall2(usize syscallN, usize arg0, usize arg1);
extern int __syscall3(usize syscallN, usize arg0, usize arg1, usize arg2);
extern int __syscall4(usize syscallN, usize arg0, usize arg1, usize arg2, usize arg3);
extern int __syscall5(usize syscallN, usize arg0, usize arg1, usize arg2, usize arg3, usize arg4);
extern int __syscall6(usize syscallN, usize arg0, usize arg1, usize arg2, usize arg3, usize arg4, usize arg5);

#ifdef _LIBC_ARCH_BITS_64
#include "x86_64/include/_syscallno.h"
#else
#error "Unsupported platform"
#endif

#endif /* __SYSCALL_H__ */
