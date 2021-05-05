/**
 * Copyright (c) 2021 Zhong Ruoyu.
 * This is part of the libc project.
 * SPDX-License-Identifier: MIT
 */

/**
 * @file limits.h
 * Sizes of integer types.
 * This header file is designed to be compatible with the C17 standard and
 * support gcc and clang, except that it is not backward compatible.
 */

#ifndef __LIMITS_H__
#define __LIMITS_H__

#define _CHAR_BIT_  8

#define _SCHAR_MAX_ (+127)
#define _SHRT_MAX_  (+32767)
#define _INT_MAX_   (+2147483647)
#define _LONG_MAX_  (+2147483647L)
#define _LLONG_MAX_ (+9223372036854775807LL)

#define SCHAR_MAX   _SCHAR_MAX_
#define SHRT_MAX    _SHRT_MAX_
#define INT_MAX     _INT_MAX_
#define LONG_MAX    _LONG_MAX_
#define LLONG_MAX   _LLONG_MAX_

#define SCHAR_MIN   (-_SCHAR_MAX_ - 1)
#define SHRT_MIN    (-_SHRT_MAX_ - 1)
#define INT_MIN     (-_INT_MAX_ - 1)
#define LONG_MIN    (-_LONG_MAX_ - 1L)
#define LLONG_MIN   (-_LLONG_MAX_ - 1LL)

#define UCHAR_MAX   (_SCHAR_MAX_ * 2 + 1)
#define USHRT_MAX   (_SHRT_MAX_ * 2 + 1)
#define UINT_MAX    (_INT_MAX_ * 2U + 1U)
#define ULONG_MAX   (_LONG_MAX_ * 2UL + 1UL)
#define ULLONG_MAX  (_LLONG_MAX_ * 2ULL + 1ULL)

#ifndef MB_LEN_MAX
#  define MB_LEN_MAX  5
#endif

#define CHAR_BIT    _CHAR_BIT_

#ifdef __CHAR_UNSIGNED__
#  define CHAR_MIN  0
#  define CHAR_MAX  UCHAR_MAX
#else
#  define CHAR_MIN  SCHAR_MIN
#  define CHAR_MAX  SCHAR_MAX
#endif

#endif  /* __LIMITS_H__ */
