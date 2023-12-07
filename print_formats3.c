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
 * print_string_with_escape - print exclusuives string.
 * @val: parameter.
 * Return: integer.
 */

int print_string_with_escape(va_list args)
{
  char *str = va_arg(args, char *);
  int i = 0, length = 0;

  while (str[i] != '\0') {
    if (str[i] < 32 || str[i] >= 127) {
      _putchar('\\');
      _putchar('x');
      length += 2;
      char hex_chars[2];
      sprintf(hex_chars, "%02X", (unsigned char)str[i]);
      _putchar(hex_chars[0]);
      _putchar(hex_chars[1]);
      length += 2;
    } else {
      _putchar(str[i]);
      length++;
    }
    i++;
  }

  return length;
}