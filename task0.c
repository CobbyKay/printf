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
char c;
char *s;

va_start(args, format);

while (*format)
{
if (*format == '%')
{
format++;
switch (*format)
{
case 'c':
c = va_arg(args, int);
write(1, &c, 1);
count++;
break;
case 's':
s = va_arg(args, char *);
while (*s)
{
write(1, s, 1);
s++;
count++;
}
break;
case '%':
write(1, "%", 1);
count++;
break;
default:
write(1, "%", 1);
write(1, format, 1);
count += 2;
break;
}
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
