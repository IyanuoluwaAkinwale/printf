#include "main.h"
/**
 * _strlen - a function that returns the length of a string
 * @str: pointer to string
 * Return: x
 */
int _strlen(char *str)
{
        int x;

        for (x = 0; str[x] != 0; x++)
                ;
        return (x);
}
/**
 * _strlench - Function of string length that applie to to pointer char
 * constant
 * @str: Pointer to char
 * Return; x
 */
int _strlench(const char *str)
{
        int x;

        for (x = 0; str[x] != 0; x++)
                ;
        return (x);
}
