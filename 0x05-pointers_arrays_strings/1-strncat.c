#include "holberton.h"

/**
 * _strncat - Concantenates two strings where n number of bytes are copied from
 * source.
 * @dest: Pointer to destination string.
 * @src: Pointer to source string.
 * @n: n bytes to copy from src.
 *
 * Return: Pointer to destination string.
 */

char *_strncat(char *dest, char *src, int n)
{
	char *destTemp;
	int index;

	destTemp = dest;
	index =  0;

	while (*destTemp != '\0')
		destTemp++;

	while (src[index] != '\0' && index < n)
		*destTemp++ = src[index++];

	return (dest);
}
