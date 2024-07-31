#include "main.h"
#include <stdarg.h>

/**
 * print_binary - Prints an unsigned integer in binary notation
 * @args: The argument list containing the unsigned integer to print
 *
 * Return: The number of characters printed
 */
int print_binary(va_list args)
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
		buffer[i++] = (num % 2) + '0'; /* Store the binary digit */
		num /= 2;
	}

	/* Print the binary digits in reverse order */
	while (i--)
	{
		_putchar(buffer[i]);
		count++;
	}

	return (count);
}
