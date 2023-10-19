#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>

int _putchar(char c);
int _printf(const char *format, ...);
int printf_char(va_list vals);
int printf_string(va_list vals);
int _strlen(char *str);
int _strlench(const char *str);
int printf_per(void);
int _printf_int(va_list args);
int _printf_deci(va_list args);

#endif
