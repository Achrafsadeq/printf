#include "main.h"

/**
 * print_S - Prints a string with non-printable characters represented
 *           as \x followed by their ASCII code in hexadecimal.
 * @args: The argument list containing the string to process and print
 *
 * Return: The number of characters printed
 */
int print_S(va_list args)
{
	char *str = va_arg(args, char *);
	int count = 0;
	int i;

	if (str == NULL)
	{
		str = "(null)";
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] < 32 || str[i] >= 127)  /* Non-printable characters */
		{
			_putchar('\\');
			_putchar('x');
			count += 2;  /* For \x */

			/* Print the hexadecimal representation of the character */
			count += _putchar("0123456789ABCDEF"[(str[i] >> 4) & 0xF]);
			count += _putchar("0123456789ABCDEF"[str[i] & 0xF]);
		}
		else
		{
			_putchar(str[i]);
			count++;
		}
	}

	return (count);
}
