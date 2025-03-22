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


#if 0
    #define __SYSCALL_ARGS_COUNT(_0, _1, _2, _3, _4, _5, _6, _7, CNT, ...) CNT
    #define _SYSCALL_ARGS_COUNT(...) __SYSCALL_ARGS_COUNT(__VA_ARGS__, 7, 6, 5, 4, 3, 2, 1, 0)
    #define __SYSCALL_DISPATCH(CNT, ...) __syscall##CNT(__VA_ARGS__)
    #define _SYSCALL_DISPATCH(CNT, ...) __SYSCALL_DISPATCH(CNT, __VA_ARGS__)
    #define __syscall(...) _SYSCALL_DISPATCH(_SYSCALL_ARGS_COUNT(__VA_ARGS__), __VA_ARGS__)
#endif

#endif /* __SYSCALL_H__ */
