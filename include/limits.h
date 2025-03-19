#ifndef __LIMITS_H__
#define __LIMITS_H__

#include <stdint.h>

#define CHAR_BIT 8
#define CHAR_WIDTH CHAR_BIT

#define CHAR_MAX SCHAR_MAX
#define CHAR_MIN SCHAR_MIN

#define SCHAR_MAX INT8_MAX
#define SCHAR_MIN INT8_MIN
#define UCHAR_MAX UINT8_MAX

#define SHRT_MAX INT16_MAX
#define SHRT_MIN INT16_MIN
#define USHRT_MAX UINT16_MAX

#define INT_MAX INT32_MAX
#define INT_MIN INT32_MIN
#define UINT_MAX UINT32_MAX

#define LONG_MAX INT64_MAX
#define LONG_MIN INT64_MIN
#define ULONG_MAX UINT64_MAX

#endif /* __LIMITS_H__ */
