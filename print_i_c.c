#include <stdio.h>
#include <stdarg.h>

int _printf(const char *format, ...) {
    va_list args;
    va_start(args, format);

    int printed_chars = 0;
    char ch;

    while ((ch = *format)) {
        if (ch == '%') {
            format++; // Move past '%'

            // Check for conversion specifiers
            switch (*format) {
                case 'd':
                case 'i': {
                    int num = va_arg(args, int);
                    printed_chars += printf("%d", num);
                    break;
                }
                default:
                    putchar('%');
                    printed_chars++;
                    break;
            }
        } else {
            putchar(ch);
            printed_chars++;
        }

        format++;
    }

    va_end(args);
    return printed_chars;
}

int main() {
    int number = 42;
    _printf("The answer is %d\n", number);
    return 0;
}
