#include "holberton.h"

/**
 * _strbrk - Searches a string for any of a set of bytes.
 * @s: Pointer to a string that will be searched.
 * @accept: Pointer to a string containing the bytes to be matched.
 *
 * Return: Pointer to the byte in s that matches one of the bytes in accept.
 */

char *_strpbrk(char *s, char *accept)
{
	int found;
	int index;
	int j;

	found = 0;

	for (index = 0; s[index] != '\0' && found == 0; index++)
	{
		for (j = 0; accept[j] != '\0' && found == 0; j++)
		{
			if (s[index] == accept[j])
				found = 1;
		}
	}
	return (&s[index - 1]);
}
