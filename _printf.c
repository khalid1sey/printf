#include "main.h"

/**
 * _printf - a function to implement custom printf
 *
 * @format: input string
 * @...: represents variable arguments
 *
 * Return: number of chracter
 *
*/
int _printf(const char *format, ...)
{
	int printed_chars = 0;

	va_list args;

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0')
			{
				break;
			}

			printed_chars += handle_format(&format, args);
		}
		else
		{
			putchar(*format);
			printed_chars++;
		}

		format++;
	}

	va_end(args);
	return (printed_chars);
}

/**
 * print_percent - handles % sign
 *
 * Return: 1 if percent
*/

int print_percent(void)
{
	putchar('%');
	return (1);
}
