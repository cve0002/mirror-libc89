#ifndef __STDDEF_H__
#define __STDDEF_H__

#define NULL ((void *) 0)
#define unused(expr) ((void) (expr))
#define noreturn __attribute__((__noreturn__))
#define offsetof(type, member) ((size_t) &(((type *) 0)->member))

#ifndef size_t
    #define size_t size_t
    typedef __typeof(sizeof(0)) size_t;
#endif

#endif /* __STDDEF_H__ */
