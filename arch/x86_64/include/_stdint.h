#ifndef __STDINT_H
#define __STDINT_H

#ifndef __INT8_TYPE__
    #define __INT8_TYPE__ __INT8_TYPE__
    #define __UINT8_TYPE__ __UINT8_TYPE__
    typedef signed char     __INT8_TYPE__;
    typedef unsigned char   __UINT8_TYPE__;
#endif
#ifndef __INT16_TYPE__
    #define __INT16_TYPE__ __INT16_TYPE__
    #define __UINT16_TYPE__ __UINT16_TYPE__
    typedef signed short    __INT16_TYPE__;
    typedef unsigned short  __UINT16_TYPE__;
#endif
#ifndef __INT32_TYPE__
    #define __INT32_TYPE__ __INT32_TYPE__
    #define __UINT32_TYPE__ __UINT32_TYPE__
    typedef signed int      __INT32_TYPE__;
    typedef unsigned int    __UINT32_TYPE__;
#endif
#ifndef __INT64_TYPE__
    #define __INT64_TYPE__ __INT64_TYPE__
    #define __UINT64_TYPE__ __UINT64_TYPE__
    typedef signed long     __INT64_TYPE__;
    typedef unsigned long   __UINT64_TYPE__;
#endif

#if !defined(int8_t) || !defined(int32_t)
    #define int8_t          int8_t
    #define uint8_t         uint8_t
    typedef __INT8_TYPE__   int8_t;
    typedef __UINT8_TYPE__  uint8_t;

    #define int16_t         int16_t
    #define uint16_t        uint16_t
    typedef __INT16_TYPE__  int16_t;
    typedef __UINT16_TYPE__ uint16_t;

    #define int32_t         int32_t
    #define uint32_t        uint32_t
    typedef __INT32_TYPE__  int32_t;
    typedef __UINT32_TYPE__ uint32_t;

    #define int64_t         int64_t
    #define uint64_t        uint64_t
    typedef __INT64_TYPE__  int64_t;
    typedef __UINT64_TYPE__ uint64_t;
#endif /* .int*_t */

#define isize isize
#define usize usize
typedef __INT64_TYPE__ isize;
typedef __UINT64_TYPE__ usize;

#ifndef size_t
    #define size_t size_t
    typedef __typeof(sizeof(0)) size_t;
#endif

#ifndef uintptr_t
    #define uintptr_t uintptr_t
    typedef __typeof(sizeof(char *)) uintptr_t;
#endif

#endif /* __STDINT_H */
