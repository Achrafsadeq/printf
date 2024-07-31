#include "main.h"

/**
 * print_unsigned - Prints an unsigned integer
 * @args: The argument list containing the unsigned integer to print
 *
 * Return: The number of characters printed
 */
int print_unsigned(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	char *str = _utoa(num, 10);
	int count = 0;

	if (str)
	{
		for (count = 0; str[count]; count++)
		{
			_putchar(str[count]);
		}
		free(str);
	}

	return (count);
}
