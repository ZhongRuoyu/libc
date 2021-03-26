/**
 * Copyright (c) 2021 Zhong Ruoyu.
 * This is part of the libc project.
 * SPDX-License-Identifier: MIT
 */

/**
 * @file stdbool.h
 * Boolean type and values.
 * This header file is designed to be compatible with the C17 standard and
 * support gcc and clang, except that it is not backward compatible.
 */

#ifndef __STDBOOL_H__
#define __STDBOOL_H__

#define bool    _Bool

#define true    1
#define false   0

#define __bool_true_false_are_defined   1

#endif  /* __STDBOOL_H__ */
