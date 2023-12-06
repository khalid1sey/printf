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

/**
 * print_unsigned - Prints an unsigned integer.
 * @args: The argument to print.
 *
 * Return: The number of characters printed.
 */
int print_unsigned(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	int num, last = n % 10, digit, exp = 1;
	int  i = 1;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(last + '0');

	return (i);
}

/**
 * print_oct - Prints an octal number.
 * @args: The argument list.
 *
 * Return: The number of characters printed.
 */
int print_oct(va_list args)
{
	int i;
	int *digits;
	int count = 0;
	unsigned int num = va_arg(args, unsigned int);
	unsigned int temp = num;

	while (num / 8 != 0)
	{
		num /= 8;
		count++;
	}
	count++;
	digits = malloc(count * sizeof(int));

	for (i = 0; i < count; i++)
	{
		digits[i] = temp % 8;
		temp /= 8;
	}

	for (i = count - 1; i >= 0; i--)
	{
		_putchar(digits[i] + '0');
	}

	free(digits);
	return (count);
}

/**
 * print_lower_hexa - Prints a hexadecimal number.
 * @args: The argument list.
 *
 * Return: The number of characters printed.
 */
int print_lower_hexa(va_list args)
{
	int i;
	int *digits;
	int count = 0;
	unsigned int num = va_arg(args, unsigned int);
	unsigned int temp = num;

	while (num / 16 != 0)
	{
		num /= 16;
		count++;
	}
	count++;
	digits = malloc(count * sizeof(int));

	for (i = 0; i < count; i++)
	{
		digits[i] = temp % 16;
		temp /= 16;
	}

	for (i = count - 1; i >= 0; i--)
	{
		if (digits[i] > 9)
			digits[i] = digits[i] + 39;

		_putchar(digits[i] + '0');
	}

	free(digits);
	return (count);
}

/**
 * print_upper_hexa - Prints a hexadecimal number in uppercase.
 * @args: The argument list.
 *
 * Return: The number of characters printed.
 */
int print_upper_hexa(va_list args)
{
	int i;
	int *digits;
	int count = 0;
	unsigned int num = va_arg(args, unsigned int);
	unsigned int temp = num;

	while (num / 16 != 0)
	{
		num /= 16;
		count++;
	}
	count++;
	digits = malloc(count * sizeof(int));

	for (i = 0; i < count; i++)
	{
		digits[i] = temp % 16;
		temp /= 16;
	}

	for (i = count - 1; i >= 0; i--)
	{
		if (digits[i] > 9)
			_putchar(digits[i] + 'A' - 10);
		else
			_putchar(digits[i] + '0');
	}

	free(digits);
	return (count);
}