#include "main.h"

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

	for (p = format; *p != '\0'; p++)
	{
		if (*p == '%')
		{
			p++;
			switch (*p)
			{
				case 'c':
					count += _putchar(va_arg(args, int));
					break;
				case 's':
					count += _print_string(va_arg(args, char *));
					break;
				case '%':
					count += _putchar('%');
					break;
				default:
					count += _putchar('%');
					count += _putchar(*p);
					break;
			}
		}
		else
		{
			count += _putchar(*p);
		}
	}

	va_end(args);
	return (count);
}
