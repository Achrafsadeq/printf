#include "main.h"
#include <stdarg.h>

/**
 * _print_string - writes a string to stdout
 * @str: The string to print
 *
 * Return: Number of characters printed
 */
int _print_string(char *str)
{
	int count = 0;

	if (str == NULL)
		str = "(null)";

	while (*str)
	{
		_putchar(*str++);
		count++;
	}

	return (count);
}

/**
 * handle_format - handles the format specifiers
 * @p: pointer to the format string
 * @args: va_list of arguments
 * @count: pointer to the count of characters printed
 */
void handle_format(const char **p, va_list args, int *count)
{
	(*p)++;
	switch (**p)
	{
		case 'c':
			*count += _putchar(va_arg(args, int));
			break;
		case 's':
			*count += _print_string(va_arg(args, char *));
			break;
		case '%':
			*count += _putchar('%');
			break;
		default:
			*count += _putchar('%');
			*count += _putchar(**p);
			break;
	}
}

/**
 * _printf - produces output according to a format
 * @format: The format string
 *
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;
	const char *p;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	/* Iterate through the format string */
	for (p = format; *p != '\0'; p++)
	{
		if (*p == '%')
		{
			handle_format(&p, args, &count);
		}
		else
		{
			count += _putchar(*p);
		}
	}

	va_end(args);
	return (count);
}
