#include "holberton.h"

/**
 * string_toupper - Changes all lower case letters of a string to uppercase.
 * @s: Pointer to a string.
 *
 * Return: Pointer to the string.
 */

char *string_toupper(char *s)
{
	char *temp;

	for (temp = s; *temp != '\0'; temp++)
	{
		if (*temp >= 'a' && *temp <= 'z')
			*temp -= 32;
	}

	return (s);
}
