#include "main.h"

/**
 * handle_print_c - Prints a character
 * @args: Argument list containing the character to print
 * Return: Number of characters printed (always 1)
 */
int handle_print_c(va_list args)
{
	char c = va_arg(args, int);

	return (write(1, &c, 1));
}
