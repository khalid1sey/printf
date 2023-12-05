#include "main.h"

/**
 * print_decimal - a function to implement custom printf
 *
 * @num: input string
 *
 * Return: number of chracter
 *
 *
*/

int print_decimal(int num)
{
	int digits = 0;

	if (num < 0)
	{
		putchar('-');
		num = -num;
		digits++;
	}
	if (num == 0)
	{
		putchar('0');
		digits++;
	} else
	{
		int rev_num = 0;

		while (num > 0)
		{
			rev_num = rev_num * 10 + num % 10;
			num /= 10;
			digits++;
		}
		while (rev_num > 0)
		{
			putchar(rev_num % 10 + '0');
			rev_num /= 10;
		}
	}
	return (digits);
}
