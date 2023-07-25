#include <stdio.h>
#include <stdarg.h>
#include "main.h"
/**
* _printf - produces output according to a format.
* @format: character string containing directives.
*
* Return: _printf conversion specifiers i and d
*/
int _printf(const char *format, ...)
{
va_list args;
int char_count = 0;
int num;

va_start(args, format);

while (*format)
{
if (*format == '%')
{
format++;

if (*format == 'd' || *format == 'i')
{
num = va_arg(args, int);
printf("%d", num);
char_count++;
}
}
else
{
putchar(*format);
char_count++;
}

format++;
}

va_end(args);
return (char_count);
}
