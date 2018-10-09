#include <stdlib.h>

unsigned int _strlen(char *s);

/**
  * _strlen - Returns the length of a string.
  * @s: A pointer to the characters string.
  *
  * Return: The length of the character string.
  */

unsigned int _strlen(char *s)
{
	unsigned int length;

	length = 0;

	while (s[length])
		length++;

	return (length);
}

/**
  * str_concat - Concatenates two strings.
  * @s1: Pointer to the first string.
  * @s2: Pointer to the second string.
  *
  * Return: Pointer to the newly concatenated strings.
  */

char *str_concat(char *s1, char *s2)
{
	unsigned int len1;
	unsigned int len2;
	unsigned int i;
	unsigned int j;
	char *ptr;

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	ptr = malloc(sizeof(s1) * (len1 + len2 + 1));

	if (ptr)
	{
		j = 0;
		for (i = 0; i < len1; i++)
			ptr[j++] = s1[i];
		for (i = 0; i < len2; i++)
			ptr[j++] = s2[i];
		ptr[j] = '\0';
	}

	return (ptr);
}
