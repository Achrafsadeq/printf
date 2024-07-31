#include "main.h"

/**
 * print_octal - Prints an unsigned integer in octal notation
 * @args: The argument list containing the unsigned integer to print
 *
 * Return: The number of characters printed
 */
int print_octal(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	char buffer[32];
	int i = 0, count = 0;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	while (num > 0)
	{
		buffer[i++] = (num % 8) + '0';
		num /= 8;
	}

	while (i--)
	{
		_putchar(buffer[i]);
		count++;
	}

	return (count);
}
