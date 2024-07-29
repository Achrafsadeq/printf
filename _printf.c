#include "main.h"

/**
 * _printf - Produces output according to a format
 * @format: A character string containing the format directives
 *
 * Return: The number of characters printed
 */
int _printf(const char *format, ...)
{
	int index = 0, count = 0;
	va_list args;

	if (!format)
		return (-1);

	va_start(args, format);

	while (format[index])
	{
		if (format[index] == '%')
		{
			index++;
			switch (format[index])
			{
				case 'c':
					count += handle_print_c(args);
					break;
				case 's':
					count += handle_print_s(args);
					break;
				case '%':
					count += handle_print_percent(args);
					break;
				default:
					write(1, &format[index - 1], 1);
					write(1, &format[index], 1);
					count += 2;
			}
		}
		else
		{
			write(1, &format[index], 1);
			count++;
		}
		index++;
	}

	va_end(args);
	return (count);
}
