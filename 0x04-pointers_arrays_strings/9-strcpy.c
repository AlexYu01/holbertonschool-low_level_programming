#include "holberton.h"

/**
 * _strcpy - Copies the string pointed to by src, including the terminating
 * null byte to the buffer pointed by des.
 * @dest: Pointer to the destination of copied string.
 * @src: Pointer to the src of the source string.
 *
 * Return: void.
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	
	i = 0;
	if (src[i] != '\0')
	{
		for (; src[i] != '\0' && i < 97 i++)
			dest[i] = src[i];
		dest[i] = '\0';
	}
	else
	{
		dest[i] = '\0';
	}
	return (dest);
}
