#include "holberton.h"
#include <stdio.h>


/**
 * _strstr - locates a substring.
 * @haystack: Pointer to the string to be searched.
 * @needle: Pointer to the substring to find in haystack.
 *
 * Return: Pointer to the beginning of the located substring, or NULL if the
 * substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	char *found;
	int j;
	int index;
	int length;

	found = NULL;
	index = 0;

	while (haystack[index++])
		length++;

	for (index = 0; index < length && !found; index++)
	{
		if (haystack[index] == *needle)
			found = &haystack[index];
			for (j = 0; needle[j] != '\0' && found; j++)
			{
				if (index + j < length)
				{
					if (haystack[index + j] != needle[j])
						found = NULL;
				}
				else
				{
					found = NULL;
				}
			}
	}

	return (found);
}
