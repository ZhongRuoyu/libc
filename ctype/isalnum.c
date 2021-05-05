/**
 * Copyright (c) 2021 Zhong Ruoyu.
 * This is part of the libc project.
 * SPDX-License-Identifier: MIT
 */

/**
 * @file isalnum.c
 * The isalnum function tests for any character for which isalpha or isdigit
 * is true.
 * This header file is designed to be compatible with the C17 standard and
 * support gcc and clang, except that it is not backward compatible.
 */

#include "ctype.h"

int isalnum(int c) {
    return (isalpha(c) || isdigit(c));
}
