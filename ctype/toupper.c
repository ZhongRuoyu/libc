/**
 * Copyright (c) 2021 Zhong Ruoyu.
 * This is part of the libc project.
 * SPDX-License-Identifier: MIT
 */

/**
 * @file toupper.c
 * The toupper function converts a lowercase letter to a corresponding
 * uppercase letter.
 * This header file is designed to be compatible with the C17 standard and
 * support gcc and clang, except that it is not backward compatible.
 */

#include "ctype.h"

int toupper(int c) {
    return ((islower(c)) ? (c - 0x0020) : c);
}
