#include "main.h"

/**
 * print_string - a function to implement custom printf
 *
 * @str: input string
 * Return: number of chracter
 *
*/
int print_string(const char *str)
{
	fputs(str, stdout);
	return (strlen(str));
}
