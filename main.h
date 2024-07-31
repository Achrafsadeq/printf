#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

#define BUFF_SIZE 1024
/* Function Prototypes */
int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int print_int(va_list args);
int print_unsigned(va_list args);
int print_number(unsigned int num);
int print_octal(va_list args);
int print_hex(va_list args);
int print_HEX(va_list args);
int print_binary(va_list args);
int print_rot13(va_list args);
int print_rev(va_list args);
int print_S(va_list args);
int print_pointer(va_list args);
unsigned int _strlen(const char *str);

/* Helper Functions */
unsigned int _strlen(const char *s);
char *_itoa(int n);
char *_utoa(unsigned int n, int base);
char *_strrev(char *s);
void _to_uppercase(char *s);
void _handle_special_characters(char *s, char *buffer, int *buffer_index);

/**
 * struct specifier - Struct to hold specifier character and function pointer
 * @spec: The specifier character (e.g., 'd', 'i', 'c')
 * @f: Pointer to the corresponding function
 */
typedef struct specifier
{
	char spec;
	int (*f)(va_list);
} specifier_t;

#endif /* MAIN_H */
