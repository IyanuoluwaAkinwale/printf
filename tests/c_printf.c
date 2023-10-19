#include "main.h"
/**
 * printf_char - prints character
 * @vals: arguments
 * Return: 1
 */
int printf_char(va_list vals)
{
        char str;

        str = va_arg(vals, int);
        _putchar(str);
        return (1);
}
