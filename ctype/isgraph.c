/**
 * Copyright (c) 2021 Zhong Ruoyu.
 * This is part of the libc project.
 * SPDX-License-Identifier: MIT
 */

/**
 * @file isgraph.c
 * The isgraph function tests for any printing character except space (' ').
 * This header file is designed to be compatible with the C17 standard and
 * support gcc and clang, except that it is not backward compatible.
 */

#include "ctype.h"

int isgraph(int c) {
    return ((c >= 0x0021) && (c <= 0x007e));
}
