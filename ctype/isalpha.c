/**
 * Copyright (c) 2021 Zhong Ruoyu.
 * This is part of the libc project.
 * SPDX-License-Identifier: MIT
 */

/**
 * @file isalpha.c
 * The isalpha function tests for any character for which isupper or islower
 * is true, or any character that is one of a locale-specific set of alphabetic
 * characters for which none of iscntrl, isdigit, ispunct, or isspace is true.
 * In the "C" locale, isalpha returns true only for the characters for which
 * isupper or islower is true.
 * This header file is designed to be compatible with the C17 standard and
 * support gcc and clang, except that it is not backward compatible.
 */

#include "ctype.h"

int isalpha(int c) {
    return (isupper(c) || islower(c));
}
