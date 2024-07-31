#include "main.h"

/**
 * print_percent - Prints a percent sign
 * @args: The argument list (unused)
 *
 * Return: The number of characters printed
 */
int print_percent(va_list args)
{
	(void)args; /* Unused */

	_putchar('%');
	return (1);
}
