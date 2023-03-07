#ifndef CS50_H
#define CS50_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

// Function prototypes
void clear_input_buffer(void);
int get_int(const char* prompt);
long get_long(const char* prompt);
float get_float(const char* prompt);
double get_double(const char* prompt);
char* get_string(const char* prompt);

#endif
