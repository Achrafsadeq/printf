#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int _printf(const char *format, ...);
int _putchar(char c);
int _print_string(char *str);
void handle_format(const char **p, va_list args, int *count);
#endif /* MAIN_H */
