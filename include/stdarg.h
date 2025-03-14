#ifndef __STDARG_H__
#define __STDARG_H__

#include "stdint.h"

#ifndef va_list
    #define va_list va_list
    typedef __builtin_va_list va_list;

    #define va_start(va, last) __builtin_va_start(va, last)
    #define va_arg(va, type) __builtin_va_arg(va, type)
    #define va_end(va) __builtin_va_end(va)
#endif

#endif /* __STDARG_H__ */
