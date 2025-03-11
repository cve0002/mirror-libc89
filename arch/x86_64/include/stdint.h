#ifndef __STDINT_H__
#define __STDINT_H__


#ifndef __INT8_TYPE__
    typedef signed char     __INT8_TYPE__;
    typedef unsigned char   __UINT8_TYPE__;
#endif
#ifndef __INT16_TYPE__
    typedef signed short    __INT16_TYPE__;
    typedef unsigned short  __UINT16_TYPE__;
#endif
#ifndef __INT32_TYPE__
    typedef signed int      __INT32_TYPE__;
    typedef unsigned int    __UINT32_TYPE__;
#endif
#ifndef __INT64_TYPE__
    typedef signed long     __INT64_TYPE__;
    typedef unsigned long   __UINT64_TYPE__;
#endif

#if !defined(int8_t) || !defined(int32_t)
    #define i8  i8
    #define u8  u8
    #define i16 i16
    #define u16 u16
    #define i32 i32
    #define u32 u32
    #define i64 i64
    #define u64 u64

    typedef __INT8_TYPE__   i8;
    typedef __UINT8_TYPE__  u8;
    typedef __INT8_TYPE__   int8_t;
    typedef __UINT8_TYPE__  uint8_t;

    typedef __INT16_TYPE__  i16;
    typedef __UINT16_TYPE__ u16;
    typedef __INT16_TYPE__  int16_t;
    typedef __UINT16_TYPE__ uint16_t;

    typedef __INT32_TYPE__  i32;
    typedef __UINT32_TYPE__ u32;
    typedef __INT32_TYPE__  int32_t;
    typedef __UINT32_TYPE__ uint32_t;

    typedef __INT64_TYPE__  i64;
    typedef __UINT64_TYPE__ u64;
    typedef __INT64_TYPE__  int64_t;
    typedef __UINT64_TYPE__ uint64_t;
#endif /* .int*_t */

typedef __INT64_TYPE__ isize;
typedef __UINT64_TYPE__ usize;

#ifndef size_t
    #define size_t size_t
    typedef usize size_t;
#endif

#endif /* __STDINT_H__ */
