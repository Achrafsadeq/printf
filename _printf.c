#include "main.h"
#include <stdarg.h>

/* Forward declaration of get_specifier_func */
int (*get_specifier_func(char s))(va_list);

/**
 * _printf - Produces output according to a format
 * @format: The format string
 *
 * Return: The number of characters printed (excluding the null byte)
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, count = 0;
	int (*f)(va_list);

	if (!format)
		return (-1);

	va_start(args, format);

	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
			{
				va_end(args);
				return (-1);
			}
			f = get_specifier_func(format[i + 1]);
			if (f != NULL)
			{
				count += f(args);
				i++;
			}
			else
			{
				count += _putchar('%');
				count += _putchar(format[i + 1]);
				i++;
			}
		}
		else
		{
			count += _putchar(format[i]);
		}
		i++;
	}

	va_end(args);
	return (count);
}

/**
 * get_specifier_func - Selects the correct function to perform the operation
 * @s: The specifier passed to the function
 *
 * Return: A pointer to the function that corresponds to the specifier given
 */
int (*get_specifier_func(char s))(va_list)
{
	specifier_t specifiers[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
		{'d', print_int},
		{'i', print_int},
		{'u', print_unsigned},
		{'o', print_octal},
		{'x', print_hex},
		{'b', print_binary},
		{'r', print_rev},
		{'R', print_rot13},
		{'S', print_S},
		{'p', print_pointer},
		{0, NULL}
	};
	int i = 0;

	while (specifiers[i].spec)
	{
		if (specifiers[i].spec == s)
			return (specifiers[i].f);
		i++;
	}
	return (NULL); /* Adding return NULL to avoid a warning */
}
