#include "main.h"

/**
 * _printf - is a function that print formatted output to the stdout stream
 * The printf function returns the total number of characters printed
 *  on success or a negative value if an error occurs.
 *
 * @format: identifier to look for.
 *
 * Return: number of chars successfully printed to the standard output stream.
 */
int _printf(const char *format, ...)
{
	conversion_specifier conversion_table[] = {
		{"%s", print_string}, {"%c", print_char}, {"%%", print_37},
		{"%i", print_int}, {"%d", print_decimal}, {"%b", print_binary},
		{"%u", print_unsigned}, {"%o", print_oct}, {"%x", print_lower_hexa},
		{"%X", print_upper_hexa}, {"%p", print_pointer}, {"%S", print_string_with_escape}
	};

	int i = 0, length = 0;
	int j;

	va_list args;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	while (format[i] != '\0')
	{
		j = 10;
		while (j >= 0)
		{
			if (conversion_table[j].specifier[0] == format[i] &&
				conversion_table[j].specifier[1] == format[i + 1])
			{
				length += conversion_table[j].fptr(args);
				i = i + 2;
				break;
			}
			j--;
		}

		if (j >= 0)
			continue;
		_putchar(format[i]);
		length++;
		i++;
	}

	va_end(args);
	return (length);
}
