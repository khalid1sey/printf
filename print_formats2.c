#include "main.h"

/**
 * print_binary - Prints a binary representation of a number.
 * @val: The argument list containing the number to print.
 *
 * Return: The number of characters printed.
 */
int print_binary(va_list val)
{
	int isFlagSet = 0;
	int count = 0;
	int i, bitValue = 1, bit;
	unsigned int number = va_arg(val, unsigned int);
	unsigned int temp;

	for (i = 0; i < 32; i++)
	{
		temp = ((bitValue << (31 - i)) & number);
		if (temp >> (31 - i))
			isFlagSet = 1;
		if (isFlagSet)
		{
			bit = temp >> (31 - i);
			_putchar(bit + '0');
			count++;
		}
	}
	if (count == 0)
	{
		count++;
		_putchar('0');
	}
	return (count);
}
