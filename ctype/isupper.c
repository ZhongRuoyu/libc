/**
 * Copyright (c) 2021 Zhong Ruoyu.
 * This is part of the libc project.
 * SPDX-License-Identifier: MIT
 */

/**
 * @file isupper.c
 * The isupper function tests for any character that is an uppercase letter or
 * is one of a locale-specific set of characters for which none of iscntrl,
 * isdigit, ispunct, or isspace is true. In the "C" locale, isupper returns
 * true only for the uppercase letters.
 * This header file is designed to be compatible with the C17 standard and
 * support gcc and clang, except that it is not backward compatible.
 */

#include "ctype.h"

int isupper(int c) {
    return ((c >= 'A') && (c <= 'Z'));
}
