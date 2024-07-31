#include "main.h"

/* Function Prototypes */
int print_hex_base(va_list args, char base);
int print_hex(va_list args);
int print_HEX(va_list args);

/**
 * print_hex - Prints an unsigned integer in hexadecimal notation (lowercase)
 * @args: The argument list containing the unsigned integer to print
 *
 * Return: The number of characters printed
 */
int print_hex(va_list args)
{
	return (print_hex_base(args, 'a'));
}

/**
 * print_HEX - Prints an unsigned integer in hexadecimal notation (uppercase)
 * @args: The argument list containing the unsigned integer to print
 *
 * Return: The number of characters printed
 */
int print_HEX(va_list args)
{
	return (print_hex_base(args, 'A'));
}

/**
 * print_hex_base - Prints an unsigned integer in hexadecimal notation
 * @args: The argument list containing the unsigned integer to print
 * @base: The base character ('a' for lowercase, 'A' for uppercase)
 *
 * Return: The number of characters printed
 */
int print_hex_base(va_list args, char base)
{
	unsigned int num = va_arg(args, unsigned int);
	char buffer[32];
	int i = 0, count = 0;
	char offset;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	offset = base - 10; /* 'a' or 'A' - 10 */

	while (num > 0)
	{
		if ((num % 16) < 10)
			buffer[i++] = (num % 16) + '0';
		else
			buffer[i++] = (num % 16) + offset;
		num /= 16;
	}

	while (i--)
	{
		_putchar(buffer[i]);
		count++;
	}

	return (count);
}
