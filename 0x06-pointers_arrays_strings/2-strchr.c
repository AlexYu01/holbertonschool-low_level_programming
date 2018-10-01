#include "holberton.h"

#define NULL 0

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

	found = NULL;

	for (index = 0; s[index] != '\0'; index++)
	{
		if (s[index] == c)
		{
			found = &s[index];
			break;
		}
	}

	if (s[index] == '\0' && c == '\0')
		found = &s[index];

	return (found);
}
