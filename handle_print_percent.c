#include "main.h"

/**
 * handle_print_percent - Prints a percent sign
 * @args: Argument list (unused)
 *
 * Return: Number of characters printed (always 1)
 */
int handle_print_percent(__attribute__((unused)) va_list args)
{
	return (write(1, "%", 1));
}
