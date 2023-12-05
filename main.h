#ifndef __MAIN_H__
#define __MAIN_H__

#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int _printf(const char *format, ...);
int handle_format(const char **format, va_list args);
int print_char(char c);
int print_string(const char *str);
int print_percent();
int print_decimal(int num);
void handle_zero_padding(const char **format);
void print_rot13(const char *str);


#endif /*__MAIN__H__*/