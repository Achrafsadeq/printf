#include "main.h"

/**
 * handle_print_s - Prints a string
 * @args: Argument list containing the string to print
 * Return: Number of characters printed
 */
int handle_print_s(va_list args)
{
	char *str = va_arg(args, char *);
	int len = 0;

	if (!str)
		str = "(null)";

	while (str[len])
		len++;

	return (write(1, str, len));
}
