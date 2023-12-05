#include "main.h"

/**
 * handle_format - a function to implement custom printf
 *
 * @format: input string
 * @args: represents variable arguments
 *
 * Return: number of chracter
*/
int handle_format(const char **format, va_list args)
{
	int printed_chars = 0;

	if (**format == '%')
	{
		printed_chars += print_percent();
	}
	else if (**format == 'c')
	{
		char c = va_arg(args, int);

		printed_chars += print_char(c);
	}
	else if (**format == 's')
	{
		char *str = va_arg(args, char *);

		printed_chars += print_string(str);
	}
	else if (**format == 'd' || **format == 'i')
	{
		int num = va_arg(args, int);

		printed_chars += print_decimal(num);
	}
	else
	{
		putchar('%');
		putchar(**format);
		printed_chars += 2;
	}

	return (printed_chars);
}
