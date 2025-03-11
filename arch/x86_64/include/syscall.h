#include "stdint.h"

extern usize __syscall0(usize syscallN);
extern usize __syscall1(usize syscallN, usize arg0);
extern usize __syscall2(usize syscallN, usize arg0, usize arg1);
extern usize __syscall3(usize syscallN, usize arg0, usize arg1, usize arg2);
extern usize __syscall4(usize syscallN, usize arg0, usize arg1, usize arg2, usize arg3);
extern usize __syscall5(usize syscallN, usize arg0, usize arg1, usize arg2, usize arg3, usize arg4);
extern usize __syscall6(usize syscallN, usize arg0, usize arg1, usize arg2, usize arg3, usize arg4, usize arg5);


