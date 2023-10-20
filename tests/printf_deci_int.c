#include "main.h"
/** _print_deci - A function that prints decimal
 * @args: argument to print
 * Return: Number of characters printed
 */
int _print_deci(va_list args)
{
        int d = va_arg(args, int);
        int digit, end = d % 10, figure, exp = 1, num;
        int x = 1;

        d = d / 10;
        digit = d;

        if (end < 0)
        {
                _putchar('-');
                digit = -digit;
                d = -d;
                end = -end;
                x++;
        }
        if (digit > 0)
        {
                while (digit / 10 != 0)
                {
                        digit = digit / 10;
                        exp = exp * 10;
                }
                digit = d;
                while (exp > 0)
                {
                        figure = num / exp;
                        _putchar(figure + '0');
                        digit = digit - (figure * exp);
                        exp = exp / 10;
                        x++;
                }
        }
        _putchar(end + '0');
        return (x);
}
#include "main.h"
/** _print_inti - A function that prints decimal
 * @args: argument to print
 * Return: Number of characters printed
 */
int _print_int(va_list args)
{
        int d = va_arg(args, int);
        int digit, end = d % 10, figure, exp = 1, num;
        int x = 1;

        d = d / 10;
        digit = d;

        if (end < 0)
        {
                _putchar('-');
                digit = -digit;
                d = -d;
                end = -end;
                x++;
        }
        if (digit > 0)
        {
                while (digit / 10 != 0)
                {
                        digit = digit / 10;
                        exp = exp * 10;
                }
                digit = d;
                while (exp > 0)
                {
                        figure = num / exp;
                        _putchar(figure + '0');
                        digit = digit - (figure * exp);
                        exp = exp / 10;
                        x++;
                }
        }
        _putchar(end + '0');
        return (x);
}
