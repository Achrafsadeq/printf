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
	int length = 0;
	int count = 0;

	if (str == NULL)
	{
		str = "(null)";
	}

	/* Calculate the length of the string */
	while (str[length] != '\0')
	{
		length++;
	}

	/* Print the string in reverse */
	while (length--)
	{
		count += _putchar(str[length]);
	}

	return (count);
}
