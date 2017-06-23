/*
 * Copyright (c) 2017 Konstantin Tcholokachvili
 * All rights reserved.
 * Use of this source code is governed by a MIT license that can be
 * found in the LICENSE file.
 */

#pragma once

#include <inttypes.h>

#define FORTH_DICTIONARY 1
#define MACRO_DICTIONARY 0

typedef int32_t cell_t;


cell_t pack(const char *word_name);
char *unpack(cell_t word);
void run_block(const cell_t nb_block);
void dot_s(void);
void do_word(cell_t word);
struct word_entry *lookup_word(cell_t name, const bool force_dictionary);
void colorforth_initialize(void);
void colorforth_finalize(void);
