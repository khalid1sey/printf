#include <stdio.h>
#include <stdarg.h>

int _printf(const char *format, ...)
{
    while (*format != '\0')
    {
        putchar(*format);
        format++;
    }
}

int main(void)
{
    _printf("Hello World");
}



	// while (*format != '\0')
	// {
	// 	if (*format == '%')
	// 	{
	// 		format++;
	// 		if (*format == '\0')
	// 		{
	// 			break;
	// 		}

	// 		printed_chars += handle_format(&format, args);
	// 	}
	// 	else
	// 	{
	// 		putchar(*format);
	// 		printed_chars++;
	// 	}

	// 	format++;
	// }