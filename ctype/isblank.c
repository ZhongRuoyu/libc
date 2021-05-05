/**
 * Copyright (c) 2021 Zhong Ruoyu.
 * This is part of the libc project.
 * SPDX-License-Identifier: MIT
 */

/**
 * @file isblank.c
 * The isblank function tests for any character that is a standard blank
 * character or is one of a localespecific set of characters for which isspace
 * is true and that is used to separate words within a line of text. The
 * standard blank characters are the following: space (' '), and horizontal tab
 * ('\t'). In the "C" locale, isblank returns true only for the standard blank
 * characters.
 * This header file is designed to be compatible with the C17 standard and
 * support gcc and clang, except that it is not backward compatible.
 */

#include "ctype.h"

int isblank(int c) {
    return ((c == ' ') || (c == '\t'));
}
