#include "main.h"

int _printf(const char *format, ...)
{
va_list args;
int char_count = 0;
va_start(args, format);

while (*format)
{
if (*format == '%')
{
format++;
if (*format == 'c')
{
int c = va_arg(args, int);
putchar(c);
char_count++;
}
else if (*format == 's')
{
char *str = va_arg(args, char *);
while (*str)
{
putchar(*str);
str++;
char_count++;
}
}
else if (*format == '%')
{
putchar('%');
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

