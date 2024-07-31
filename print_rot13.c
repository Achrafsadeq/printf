#include "main.h"

/**
 * print_rot13 - Prints a string using rot13 encoding
 * @args: The argument list containing the string to print
 *
 * Return: The number of characters printed
 */
int print_rot13(va_list args)
{
	char *str = va_arg(args, char *);
	char *p;
	int count = 0;

	if (str == NULL)
	{
		str = "(null)";
	}

	for (p = str; *p; p++)
	{
		if ((*p >= 'a' && *p <= 'z') || (*p >= 'A' && *p <= 'Z'))
		{
			if ((*p >= 'a' && *p <= 'm') || (*p >= 'A' && *p <= 'M'))
			{
				_putchar(*p + 13);
			}
			else
			{
				_putchar(*p - 13);
			}
		}
		else
		{
			_putchar(*p);
		}
		count++;
	}

	return (count);
}
