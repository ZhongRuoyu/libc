/**
 * Copyright (c) 2021 Zhong Ruoyu.
 * This is part of the libc project.
 * SPDX-License-Identifier: MIT
 */

/**
 * @file ispunct.c
 * The ispunct function tests for any printing character that is one of a
 * locale-specific set of punctuation characters for which neither isspace nor
 * isalnum is true. In the "C" locale, ispunct returns true for every printing
 * character for which neither isspace nor isalnum is true.
 * This header file is designed to be compatible with the C17 standard and
 * support gcc and clang, except that it is not backward compatible.
 */

#include "ctype.h"

int ispunct(int c) {
    return (isprint(c) && !(isspace(c) || isalnum(c)));
}
