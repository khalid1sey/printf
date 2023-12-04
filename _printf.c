#include "main.h"

/**
 * _printf - a function to implement custom printf
 * 
 * @format: input string
 * @...: represents variable arguments 
 * 
 * Return: number of chracter
 * 
*/
int _printf(const char *format, ...)
{

    va_list args_list;
    int printed_chars = 0;
    int ret = 0;
    char ch;

    va_start(args_list, format);

    for (int i = 0; format[i] != '\0'; i++)
    {
        if (format[i] == '%')
        {
            i++;
            switch (format[i])
            {
                case 'd':
                case 'i':
                    ret = va_arg(args_list, int);
                    printed_chars += printf("%d", ret);
                    break;

                case 'u':
                    ret = va_arg(args_list, unsigned int);
                    printed_chars += printf("%u", ret);
                    break;

                case 'f':
                    ret = va_arg(args_list, double);
                    printed_chars += printf("%f", ret);
                    break;

                case 'c':
                    ch = (char)va_arg(args_list, int);
                    printed_chars += printf("%c", ch);
                    break;

                case 's':
                    printed_chars += printf("%s", va_arg(args_list, char *));
                    break;

                default:
                    printed_chars += printf("%%%c", format[i]);
                    break;
            }
        }
        else
        {
            putchar(format[i]);
            printed_chars++;
        }
    }

    va_end(args_list);
    return printed_chars;
}