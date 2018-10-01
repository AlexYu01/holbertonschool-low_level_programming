#include "holberton.h"

/**
 * _strchr - Locates a character in a string.
 * @s: Pointer to the string.
 * @c: Character to search for.
 *
 * Return: Pointer to the first occurrence of the character in the string.
 */

char *_strchr(char *s, char c)
{
	char *found;
	int index;
	int length;

	index = 0;

	while (s[index++])
		length++;

	for (index = 0; s[index] < length + 1; index++)
	{
		if (s[index] == c)
		{
			found = &s[index];
			break;
		}
	}

	return (found);
}
