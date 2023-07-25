#include <stdio.h>
#include <stdarg.h>

int _printf(const char *format, ...) {
    va_list args;
    va_start(args, format);

    int char_count = 0;
    char c;
    while ((c = *format++)) {
        if (c != '%') {
            putchar(c);
            char_count++;
        } else {
            // Handle conversion specifiers 'd' and 'i'
            c = *format++;
            if (c == 'd' || c == 'i') {
                int num = va_arg(args, int);
                printf("%d", num);
                char_count++;
            } else {
                // Invalid specifier, just print the '%'
                putchar('%');
                char_count++;
                if (c != '\0') {
                    putchar(c);
                    char_count++;
                }
            }
        }
    }

    va_end(args);
    return char_count;
}
