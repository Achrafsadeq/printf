#include "main.h"

/**
 * print_pointer - Prints a pointer address in hexadecimal format
 * @args: The argument list containing the pointer to print
 *
 * Return: The number of characters printed
 */
int print_pointer(va_list args)
{
	void *ptr = va_arg(args, void *);
	unsigned long int addr = (unsigned long int)ptr;
	char buffer[32];
	int i = 0, count = 0;

	if (!ptr)
	{
		return (_printf("(nil)"));
	}

	_putchar('0');
	_putchar('x');
	count += 2;

	if (addr == 0)
	{
		_putchar('0');
		count++;
	}

	while (addr > 0)
	{
		buffer[i++] = "0123456789abcdef"[addr % 16];
		addr /= 16;
	}

	while (i--)
	{
		_putchar(buffer[i]);
		count++;
	}

	return (count);
}
