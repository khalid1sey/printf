#ifndef __MAIN_H__
#define __MAIN_H__

#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>



/**
 * struct format - store the format string and the corresponding arguments
 * @specifier: stores the string representation of the conversion specifier.
 * @fptr: store the address of a specific function
 *
 */

typedef struct format
{
	char *specifier;
	int (*fptr)();
} conversion_specifier;

int _printf(const char *format, ...);

/*print_formats.c*/
int print_char(va_list val);
int print_string(va_list val);
int print_37(void);
int print_int(va_list args);
int print_decimal(va_list args);

/*print_formats2.c*/
int print_binary(va_list val);
int print_unsigned(va_list args);
int print_oct(va_list args);
int print_lower_hexa(va_list args);
int print_upper_hexa(va_list args);

/*print_formats3.c*/
int print_pointer(va_list val);
int print_adress(unsigned long int num);
int print_exc_string(va_list val);

/*helpers*/
int _putchar(char c);
int _puts(char *str);
int _strlen(char *s);

#endif /*__MAIN__H__*/