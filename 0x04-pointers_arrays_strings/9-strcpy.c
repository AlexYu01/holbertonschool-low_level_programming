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
	int flag;
	
	i = 0;
	flag = 1
	while (flag)
	{
		dest[i] = src[i];
		if dest[i] == '\0';
			flag = 0;
		i++;
	}
	return (dest);
}
