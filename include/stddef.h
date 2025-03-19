#ifndef __STDDEF_H__
#define __STDDEF_H__

#define NULL ((void *) 0)
#define ignore(expr) ((void) (expr))
#define offsetof(type, member) ((size_t) &(((type *) 0)->member))

#ifndef size_t
    #define size_t size_t
    typedef __typeof(sizeof(0)) size_t;
#endif

#ifndef ptrdiff_t
    #define ptrdiff_t ptrdiff_t
    #define _INT_0_P ((int *) 0)
    typedef __typeof(_INT_0_P - _INT_0_P) ptrdiff_t;
    #undef _INT_0_P
#endif

#define noreturn __attribute__((__noreturn__))
#define unused __attribute__((unused))

#endif /* __STDDEF_H__ */
