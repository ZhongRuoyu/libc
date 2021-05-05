/**
 * Copyright (c) 2021 Zhong Ruoyu.
 * This is part of the libc project.
 * SPDX-License-Identifier: MIT
 */

/**
 * @file isdigit.c
 * The isdigit function tests for any decimal-digit character.
 * This header file is designed to be compatible with the C17 standard and
 * support gcc and clang, except that it is not backward compatible.
 */

#include "ctype.h"

int isdigit(int c) {
    return ((c >= '0') && (c <= '9'));
}
