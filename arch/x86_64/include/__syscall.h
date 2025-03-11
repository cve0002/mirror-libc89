#ifndef __SYSCALL_H
#define __SYSCALL_H

#include "stdint.h"

extern int __syscall0(usize syscallN);
extern int __syscall1(usize syscallN, usize arg0);
extern int __syscall2(usize syscallN, usize arg0, usize arg1);
extern int __syscall3(usize syscallN, usize arg0, usize arg1, usize arg2);
extern int __syscall4(usize syscallN, usize arg0, usize arg1, usize arg2, usize arg3);
extern int __syscall5(usize syscallN, usize arg0, usize arg1, usize arg2, usize arg3, usize arg4);
extern int __syscall6(usize syscallN, usize arg0, usize arg1, usize arg2, usize arg3, usize arg4, usize arg5);

#endif /* __SYSCALL_H */
