#include "main.h"

/**
 * print_pointer - Prints an pointer.
 * @val: Arguments.
 *
 * Return: Number of characters printed.
 */
int print_pointer(va_list val)
{
	void *ptr;
	char *nil_str = "(nil)";
	long int address;
	int count = 0;
	int i;

	ptr = va_arg(val, void *);
	if (ptr == NULL)
	{
		for (i = 0; nil_str[i] != '\0'; i++)
		{
			_putchar(nil_str[i]);
			count++;
		}
		return (count);
	}

	address = (unsigned long int)ptr;
	_putchar('0');
	_putchar('x');
	count += 2;
	count += print_adress(address);
	return (count);
}

/**
 * print_adress - prints an adress.
 * @num: arguments.
 * Return: counter.
 */
int print_adress(unsigned long int num)
{
	long int i;
	long int *array;
	long int counter = 0;
	unsigned long int temp = num;

	while (num / 16 != 0)
	{
		num /= 16;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(long int));

	for (i = 0; i < counter; i++)
	{
		array[i] = temp % 16;
		temp = temp / 16;
	}
	for (i = counter - 1; i >= 0; i--)
	{
		if (array[i] > 9)
			array[i] = array[i] + 39;
		_putchar(array[i] + '0');
	}
	free(array);
	return (counter);
}

#include "main.h"
/**
 * print_exc_string - print exclusuives string.
 * @val: parameter.
 * Return: integer.
 */

int print_exc_string(va_list val)
{
	char *s;
	int i, length = 0;
	int value;

	s = va_arg(val, char *);
	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < 32 || s[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			length = length + 2;
			value = s[i];
			if (value < 16)
			{
				_putchar('0');
				length++;
			}
			length = length + print_adress(value);
		}
		else
		{
			_putchar(s[i]);
			length++;
		}
	}
	return (length);
}