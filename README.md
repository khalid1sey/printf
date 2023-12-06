0x11. C - printf


<h3>_printf - Custom Print Function</h3>

The _printf function is a custom print function in C that supports various format specifiers. It allows for flexible printing of characters, strings, integers, decimals, and binary numbers.

Function Signature
c

int _printf(const char *format, ...);

<h3>unction Parameters</h3>

    format: A pointer to a character array (const char*) representing the format string that specifies the desired output format.
    ...: Variadic arguments that correspond to the format specifiers in the format string.

<h3>Supported Format Specifiers</h3>
Here are some commonly used format specifiers in printf:
<table>
   <tr> Here are some commonly used format specifiers in printf:</tr>
    <tr><td>%c:</td> <td> Format as a character.</td></tr>
    <tr><td> %s:</td> <td>Format as a null-terminated string.</td></tr>
     <tr><td> %i:</td> <td>Format as a signed integer.</td></tr>
    <tr><td>%d:</td> <td>Format as a signed decimal.</td></tr>
     <tr><td> %b:</td> <td>Format as Unsigned binary.</td></tr>
    <tr><td>%u :</td> <td>Format as an unsigned decimal integer.</td></tr>
     <tr><td> %o:</td> <td>Format as an octal.</td></tr>
    <tr><td>%x: </td> <td>Format as a hexadecimal number, lowercase.</td></tr>
     <tr><td>%X: </td> <td>Format as a hexadecimal number, uppercase.</td></tr>
</table>

<h3>Source Files</h3>

The implementation of the _printf function is divided into multiple source files:

<h3>Conversion Specifier Structure
</h3>
The conversio<n_specifier structure is a data structure used for mapping format specifiers to corresponding functions in C. It allows for flexible handling of different format specifiers in printf-like functions.
Structure Definition

<h3>The conversion_specifier structure has the following members:</h3>

    specifier: A pointer to a character (char*) that represents the format specifier.
    fptr: A pointer to a function (int (*)()) that takes no arguments and returns an integer.

print_formats.c

    print_char: Function to handle printing a character.
    print_string: Function to handle printing a string.
    print_37: Function to handle printing a percent specifier.
    print_int: Function to handle printing signed decimal integers.
    print_decimal: Function to handle printing unsigned decimal integers.

print_formats2.c

    print_binary: Function to handle printing a binary representation of an unsigned integer.

helpers.c

    _putchar: Function to print a character to the standard output.
    _puts: Function to print a null-terminated string to the standard output.

<h4>Purpose</h4>

The _printf function provides a customizable and extensible print function in C, similar to the standard printf function. It allows for printing different data types and format specifiers, providing flexibility and control over the output format.

<h4>Authors</h4>

Khalid Sinteayehu lilahseyfu@gmail.com