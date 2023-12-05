#ifndef __MAIN_H__
#define __MAIN_H__

#include <stdarg.h>
#include <stdio.h>
#include <string.h>

int _printf(const char *format, ...);
int print_char(char c);
int print_string(const char *str);
int print_percent();
int print_decimal(int num);

#endif /*__MAIN__H__*/