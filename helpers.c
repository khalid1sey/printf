#include "main.h"

/**
 * _putchar - prints charcter to  stdout
 *
 * @c: character
 *
 * Return: character
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _puts - prints string to stdout
 *
 * @str: string
 *
 * Return: length of string
*/
int _puts(char *str)
{
	int count = 0;

	while (*str)
	{
		count += write(1, str, 1);
		str++;
	}
	return (count);
}
