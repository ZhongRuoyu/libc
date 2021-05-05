/**
 * Copyright (c) 2021 Zhong Ruoyu.
 * This is part of the libc project.
 * SPDX-License-Identifier: MIT
 */

/**
 * @file iscntrl.c
 * The iscntrl function tests for any control character.
 * This header file is designed to be compatible with the C17 standard and
 * support gcc and clang, except that it is not backward compatible.
 */

#include "ctype.h"

int iscntrl(int c) {
    return (((c >= 0x0000) && (c <= 0x001f)) || (c == 0x007f));
}
