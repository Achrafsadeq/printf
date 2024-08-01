#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @str: The string to measure.
 *
 * Return: The length of the string.
 */
unsigned int _strlen(const char *str)
{
	int length = 0; /* Initialize the length variable to 0 */

	/* Iterate through the string until the null terminator is found */
	while (str[length] != '\0')
	{
		length++; /* Increment the length for each character */
	}

	return (length); /* Return the length of the string */
}
