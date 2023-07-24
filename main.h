#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

int _printf(const char *format, ...);
int handle_conversion_specifier(const char *format, va_list args);
#endif /* MAIN_H */
