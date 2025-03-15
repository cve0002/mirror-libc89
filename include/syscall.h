#ifndef __SYSCALL_H__
#define __SYSCALL_H__

#include <stdint.h>

extern isize __syscall0(usize syscallN);
extern isize __syscall1(usize syscallN, usize arg0);
extern isize __syscall2(usize syscallN, usize arg0, usize arg1);
extern isize __syscall3(usize syscallN, usize arg0, usize arg1, usize arg2);
extern isize __syscall4(usize syscallN, usize arg0, usize arg1, usize arg2, usize arg3);
extern isize __syscall5(usize syscallN, usize arg0, usize arg1, usize arg2, usize arg3, usize arg4);
extern isize __syscall6(usize syscallN, usize arg0, usize arg1, usize arg2, usize arg3, usize arg4, usize arg5);

#include <bits/syscallno.h>

#endif /* __SYSCALL_H__ */
