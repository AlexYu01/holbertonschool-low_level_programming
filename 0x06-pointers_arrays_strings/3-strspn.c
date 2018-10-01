#include "holberton.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: Pointer to the string to search.
 * @accept: Pointer to the string of characters to match.
 *
 * Return: The number of bytes in the initial segment of s which consist only
 * of bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	int index;
	int j;
	int max;

	max = 0;

	for (index = 0; accept[index] != '\0'; index++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (accept[index] == s[j])
			{
				if (j + 1 > max)
					max = j + 1;
				break;
			}
		}
	}

	return (max);
}
