#include "holberton.h"

/**
 * _memcpy - Copies memory area.
 * @dest: Pointer to memory destination area.
 * @src: Pointer to memory source area.
 * @n: The number of bytes to copy from src to dest.
 *
 * Return: Pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
		dest[index] = src[index];

	return (dest);
}

