#include "main.h"

/**
* _printf - produces output according to a format.
* @format: character string containing directives.
*
* Return: the number of characters printed (excluding the null byte)
*/
int _printf(const char *format, ...)
{
va_list args;
int count = 0;

va_start(args, format);

while (*format)
{
if (*format == '%')
{
format++;
count += handle_conversion_specifier(format, args);
}
else
{
write(1, format, 1);
count++;
}

format++;
}

va_end(args);

return (count);
}

/**
* handle_conversion_specifier - handles the conversion specifiers.
* @format: character string containing directives.
* @args: variable argument list.
*
* Return: the number of characters printed for the conversion specifier.
*/
int handle_conversion_specifier(const char *format, va_list args)
{
char c;
char *s;

switch (*format)
{
case 'c':
c = va_arg(args, int);
write(1, &c, 1);
return (1);
case 's':
s = va_arg(args, char *);
int count = 0;
while (*s)
{
write(1, s, 1);
s++;
count++;
}
return (count);
case '%':
write(1, "%", 1);
return (1);
default:
write(1, "%", 1);
write(1, format, 1);
return (2);
}
}
