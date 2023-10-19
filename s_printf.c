#include "main.h"
/**printf_string - print a string
 * @vals: arguments
 * Return: String length
 */

int printf_string(va_list vals)
{
        int x, char *str, int length;

        va_arg(vals, char *) = str;
        if (str == NULL)
        {
                str = "(null)";
                _strlen(str) = length;
                for (x =0; x < length; x++)
                        _putchar(str[x]);
                return (length);
        }
        else
        {
                _strlen(str) = length;
                for (x = 0; x < length; x++)
                        _putchar(str[x]);
                return (length);
        }
}
