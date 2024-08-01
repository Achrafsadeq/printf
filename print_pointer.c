#include "main.h"

/**
 * print_pointer - Prints the value of a pointer in hexadecimal format.
 * @args: The argument list containing the pointer to print.
 *
 * Return: The number of characters printed.
 */
int print_pointer(va_list args)
{
	void *ptr = va_arg(args, void *);
	unsigned long address;
	int count = 0;
	int i, leading_zero = 1;

	if (ptr == NULL)
	{
		return (_putchar('(') + _putchar('n') + _putchar('u')
			+ _putchar('l') + _putchar('l') + _putchar(')'));
	}

	address = (unsigned long)ptr;

	/* Print "0x" */
	count += _putchar('0');
	count += _putchar('x');

	/* Convert the address to hexadecimal and print */
	for (i = (sizeof(void *) * 2) - 1; i >= 0; i--)
	{
		int digit = (address >> (i * 4)) & 0xF;

		if (digit != 0 || !leading_zero || i == 0)
		{
			count += _putchar("0123456789abcdef"[digit]);
			leading_zero = 0;
		}
	}

	return (count);
}
