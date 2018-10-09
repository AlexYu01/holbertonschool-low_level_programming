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
  * _strdup - Returns a pointer to a deep copy of a string.
  * @str: Pointer to the deep copy.
  *
  * Return: The pointer to the deep copy.
  */

char *_strdup(char *str)
{
	char *ptr;
	unsigned int len;
	unsigned int i;

	len = _strlen(str);
	ptr = malloc(sizeof(*str) * (len + 1));

	if (ptr)
	{
		for (i = 0; i < len; i++)
			ptr[i] = str[i];
		ptr[i] = '\0';
	}

	return (ptr);
}
