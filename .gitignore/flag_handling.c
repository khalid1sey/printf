#include "main.h"

/**
 * handle_zero_padding - a function to implement custom printf
 *
 * @format: input string
 *
 * Return: number of chracter
 *
*/

void handle_zero_padding(const char **format)
{
	if (**format == '0')
	{
		putchar('0');
		(*format)++;
	}
}
