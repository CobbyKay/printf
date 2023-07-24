#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

int _printf(const char *format, ...);
int binary_printf(const char *format, ...);
int custom_printf(const char *format, ...);
int flag_printf(const char *format, ...);
int length_printf(const char *format, ...);
int field_width_printf(const char *format, ...);
int precision_printf(const char *format, ...);
int zero_flag_printf(const char *format, ...);
int minus_flag_printf(const char *format, ...);
int custom_reversed_printf(const char *format, ...);
int custom_rot13_printf(const char *format, ...);
int all_options_printf(const char *format, ...);
#endif /* MAIN_H */
