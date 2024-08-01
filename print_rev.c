#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @args: The argument list containing the string to print in reverse
 *
 * Return: The number of characters printed
 */

int print_rev(va_list args)
{
	char *str = va_arg(args, char *);
	int length = _strlen(str);
	int count = 0;

	if (str == NULL)
	{
		str = "(null)";
	}

	/* Print the string in reverse */
	while (length--)
	{
		count += _putchar(str[length]);
	}

	return (count);
}
