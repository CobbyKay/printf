#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int print_i(va_list i);
int print_d(va_list d);
#endif /* MAIN_H */
