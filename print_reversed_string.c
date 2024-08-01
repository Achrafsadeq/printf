#include "main.h"

/**
 * print_reversed_string - Prints a string in reverse.
 * @args: The list of arguments containing the string to print.
 *
 * Return: The number of characters printed.
 */
int print_reversed_string(va_list args)
{
	char *str = va_arg(args, char *);
	int length = _strlen(str);
	int i;

	if (str == NULL)
	{
		return (write(1, "(null)", 6));  /* Handle NULL string */
	}

	for (i = length - 1; i >= 0; i--)
	{
		_putchar(str[i]);
	}

	return (length);
}
