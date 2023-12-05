#include "main.h"

/**
 * _printf - a function to implement custom printf
 *
 * @format: input string
 *
 * Return: number of chracter
*/
int _printf(const char *format, ...)
{
	int char_counter = 0;

	va_list args_list;

	va_start(args_list, format);

	char_counter += format_handler(format, args_list);

	va_end(args_list);
	return (char_counter);
}

/**
 * format_handler - a function to implement custom printf
 *
 * @format: input string
 * @args_list: arguments list
 *
 * Return: number of chracter
*/
int format_handler(const char *format, va_list args_list)
{
	int char_counter = 0;
	const char *p = format;

	for (; *p; p++)
	{
		if (*p == '%')
		{
			p++;
			switch (*p)
			{
				case 'c':
					char_counter += _putchar(va_arg(args_list, int));
					break;
				case 's':
					char_counter += _puts(va_arg(args_list, char *));
					break;
				case '%':
					char_counter += _putchar('%');
					break;
				default:
					/* Handle invalid format specifiers */
					_putchar('%');
					_putchar(*format);
			}
		} else
		{
			char_counter += _putchar(*p);
		}
	}
	return (char_counter);
}
