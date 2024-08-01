#include "main.h"

/**
 * _itoa - Converts an integer to a string
 * @n: The integer to convert
 *
 * Return: The resulting string
 */
char *_itoa(int n)
{
	char *str;
	int len = n == 0 ? 1 : 0, temp = n, sign = n < 0 ? -1 : 1;

	while (temp)
	{
		len++;
		temp /= 10;
	}

	str = malloc(len + 1);
	if (!str)
		return (NULL);

	str[len] = '\0';
	while (len--)
	{
		str[len] = '0' + sign * (n % 10);
		n /= 10;
	}

	if (sign < 0)
		str[0] = '-';

	return (str);
}

/**
 * _utoa - Converts an unsigned integer to a string
 * @n: The unsigned integer to convert
 * @base: The base for conversion
 *
 * Return: The resulting string
 */
char *_utoa(unsigned int n, int base)
{
	char *str;
	int len = n == 0 ? 1 : 0, temp = n;

	while (temp)
	{
		len++;
		temp /= base;
	}

	str = malloc(len + 1);
	if (!str)
		return (NULL);

	str[len] = '\0';
	while (len--)
	{
		str[len] = "0123456789abcdef"[n % base];
		n /= base;
	}

	return (str);
}

/**
 * _strrev - Reverses a string in place
 * @s: The string to reverse
 *
 * Return: A pointer to the reversed string
 */
char *_strrev(char *s)
{
	int i, j;
	char temp;

	for (i = 0, j = _strlen(s) - 1; i < j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}

	return (s);
}

/**
 * _strlen - Returns the length of a string
 * @str: The string to measure
 *
 * Return: The length of the string
 */
unsigned int _strlen(const char *str)
{
	unsigned int length = 0;

	while (str[length])
	{
		length++;
	}

	return (length);
}
