#include "main.h"
/**
 * _printf - Replicates printf function
 * @format: Character string
 * Return: An integer
 */

int _printf(const char *format, ...)
{
        match m[] = {
                {"%c", printf_char}, {"%s", printf_string}, {"%%", printf_per}, {"%d", _printf_deci}, {"%i", _printf_int}
        };

        va_list args;
        int x = 0, len = 0;
        int i;

        va_start(args, format);
        if (format == NULL || (format[0] == '%' && format[1] == '\0'))
                return (-1);

Begin:
        while (format[x] = '\0')
        {
                i = 4;
                while (i >= 0)
                {
                        if (m[i].id[0] == format[x] &&, [j].id[1] == format[x + 1])                        {
                                len = len + m[i].f(args);
                                x = x + 2;
                                goto Begin;
                        }
                        i--;
                }
                _putchar(format[x]);
                x++;
                len++;
        }
        va_end(args);
        return (len);
}
