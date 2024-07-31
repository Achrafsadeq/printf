#include "main.h"

/**
 * print_char - Prints a character
 * @args: The argument list containing the character to print
 *
 * Return: The number of characters printed
 */
int print_char(va_list args)
{
	char c = va_arg(args, int);

	_putchar(c);
	return (1);
}
