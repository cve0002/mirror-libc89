#ifndef __STDINT_H__
#define __STDINT_H__

#include "assert.h"

#define __stdint_typedef_iu(itype, utype, bits) \
    typedef itype   i ## bits; \
    typedef utype   u ## bits;

#define __stdint_typedef_TYPE__(bits) \
    __stdint_typedef_iu(__INT ## bits ## _TYPE__, __UINT ## bits ## _TYPE__, bits)

#define __stdint_int_t_assert(type, expected_bits) \
    static_assert((sizeof(type) * 8) == (expected_bits), "size of " # type " must be " # expected_bits " bits")

#define __stdint_int_t_assert_iu(bits) \
    __stdint_int_t_assert(i ## bits, bits); \
    __stdint_int_t_assert(u ## bits, bits);

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

    __stdint_typedef_TYPE__(8)
    __stdint_typedef_TYPE__(16)
    __stdint_typedef_TYPE__(32)
    __stdint_typedef_TYPE__(64)

    __stdint_int_t_assert_iu(8)
    __stdint_int_t_assert_iu(16)
    __stdint_int_t_assert_iu(32)
    __stdint_int_t_assert_iu(64)
#endif /* .int*_t */

#undef __stdint_int_t_assert_iu
#undef __stdint_int_t_assert
#undef __stdint_typedef_TYPE__
#undef __stdint_typedef_iu


#ifndef usize
    #define usize usize
    typedef u64 usize;
#endif

#endif /* __STDINT_H__ */
