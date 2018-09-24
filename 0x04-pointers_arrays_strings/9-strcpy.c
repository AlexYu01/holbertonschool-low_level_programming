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
	char *temp;
	int i;

	temp = src;
	i = 0;
	do {
		dest[i] = src[i];
		i++;
	} while (temp[i] != '\0');
	return (dest);
}
