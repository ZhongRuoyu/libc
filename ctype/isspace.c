/**
 * Copyright (c) 2021 Zhong Ruoyu.
 * This is part of the libc project.
 * SPDX-License-Identifier: MIT
 */

/**
 * @file isspace.c
 * The isspace function tests for any character that is a standard white-space
 * character or is one of a locale-specific set of characters for which isalnum
 * is false. The standard white-space characters are the following: space
 * (' '), form feed ('\f'), new-line ('\n'), carriage return ('\r'), horizontal
 * tab ('\t'), and vertical tab ('\v'). In the "C" locale, isspace returns true
 * only for the standard white-space characters.
 * This header file is designed to be compatible with the C17 standard and
 * support gcc and clang, except that it is not backward compatible.
 */

#include "ctype.h"

int isspace(int c) {
    return ((c == ' ') ||
            (c == '\f') ||
            (c == '\n') ||
            (c == '\r') ||
            (c == '\t') ||
            (c == '\v'));
}
