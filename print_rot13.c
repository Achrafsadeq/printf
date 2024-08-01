#include "main.h"

/**
 * print_rot13 - Encodes and prints a string in ROT13 format
 * @args: The argument list containing the string to encode and print
 *
 * Return: The number of characters printed
 */
int print_rot13(va_list args)
{
	char *str = va_arg(args, char *);
	char *rot13 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot13_shift = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j, count = 0;

	if (str == NULL)
	{
		str = "(null)";
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; rot13[j] != '\0'; j++)
		{
			if (str[i] == rot13[j])
			{
				_putchar(rot13_shift[j]);
				count++;
				break;
			}
		}
		if (rot13[j] == '\0')
		{
			_putchar(str[i]);
			count++;
		}
	}

	return (count);
}
