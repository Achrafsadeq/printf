#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/* Function prototypes */
int _printf(const char *format, ...);
int handle_print_c(va_list args);
int handle_print_s(va_list args);
int handle_print_percent(va_list args);

#endif /* MAIN_H */
