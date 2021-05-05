/**
 * Copyright (c) 2021 Zhong Ruoyu.
 * This is part of the libc project.
 * SPDX-License-Identifier: MIT
 */

/**
 * @file tolower.c
 * The tolower function converts an uppercase letter to a corresponding
 * lowercase letter.
 * This header file is designed to be compatible with the C17 standard and
 * support gcc and clang, except that it is not backward compatible.
 */

#include "ctype.h"

int tolower(int c) {
    return ((isupper(c)) ? (c + 0x0020) : c);
}
