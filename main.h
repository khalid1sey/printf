#ifndef __MAIN_H__
#define __MAIN_H__

#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <unistd.h>

/**
 * struct format - converter for printf
 * @ph: type char pointer of the specifier
 * @function: function for the conversion specifier
 *
 */

typedef struct format
{
	char *ph;
	int (*function)();
} convert;

int _printf(const char *format, ...);

/*Handlers*/
int print_char(va_list val);
int print_string(va_list val);
int print_37(void);
int print_int(va_list args);
int print_decimal(va_list args);

/*helpers*/
int _putchar(char c);
int _puts(char *str);
int _strlen(char *s)

#endif /*__MAIN__H__*/