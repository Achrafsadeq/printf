#include "main.h"

/**
 * print_int - Prints an integer
 * @args: The argument list containing the integer to print
 *
 * Return: The number of characters printed
 */
int print_int(va_list args)
{
	int num = va_arg(args, int);
	char *str = _itoa(num);
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
