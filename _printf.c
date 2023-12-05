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
int _printf(const char *format, ...) {
    int printed_chars = 0;
    va_list args;
    va_start(args, format);
 

    while (*format != '\0') {
        if (*format == '%') {
            format++;
            if (*format == '\0') {
                break;
            }
            if (*format == '%') {
                printed_chars += print_percent();
            } else if (*format == 'c') {
                char c = va_arg(args, int);
                printed_chars += print_char(c);
            } else if (*format == 's') {
                char *str = va_arg(args, char *);
                printed_chars += print_string(str);
            } else if (*format == 'd' || *format == 'i') {
                int num = va_arg(args, int);
                printed_chars += print_decimal(num);
            } else {
                putchar('%');
                putchar(*format);
                printed_chars += 2;
            }
        } else {
            putchar(*format);
            printed_chars++;
        }

        format++;
    }

    va_end(args);

    return printed_chars;
}

int print_char(char c) {
    putchar(c);
    return 1;
}

int print_string(const char *str) {
    fputs(str, stdout);
    return strlen(str);
}

int print_percent() {
    putchar('%');
    return 1;
}

int print_decimal(int num) {
    int digits = 0;
    if (num < 0) {
        putchar('-');
        num = -num;
        digits++;
    }
    if (num == 0) {
        putchar('0');
        digits++;
    } else {
        int rev_num = 0;
        while (num > 0) {
            rev_num = rev_num * 10 + num % 10;
            num /= 10;
            digits++;
        }
        while (rev_num > 0) {
            putchar(rev_num % 10 + '0');
            rev_num /= 10;
        }
    }
    return digits;
}