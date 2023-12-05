#include "main.h"

/**
 * print_rot13 - a function to implement custom printf
 *
 * @str: input string
 *
 * Return: number of chracter
 *
*/

void print_rot13(const char *str)
{
	while (*str != '\0')
	{
		if (isalpha(*str))
		{
			char base = islower(*str) ? 'a' : 'A';

			putchar((*str - base + 13) % 26 + base);
		} else
		{
			putchar(*str);
		}
		str++;
	}
}
