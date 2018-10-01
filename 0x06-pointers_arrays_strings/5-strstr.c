#include "holberton.h"

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
	int flag;
	int j;
	int index;

	flag = 0;

	for (index = 0; haystack[index] != '\0' && flag == 0; index++)
	{
		if (haystack[index] == *needle)
			found = &haystack[index];
			for (j = 0; needle[j] != '\0'; j++)
			{
				if (haystack[index + j] != needle[j])
				{
					found = (void *) 0;
					break;
				}
				if (needle[j + 1]  == '\0' && found)
					flag = 1;
			}
	}

	return (found);
}