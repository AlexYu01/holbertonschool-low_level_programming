#include "holberton.h"

/**
 * get_bit - Returns the vlaue of a bit at a given index.
 *
 * @n: unsigned long int value.
 * @index: unsigned int value of the index to retrieve.
 *
 * Return: 0 or 1. -1 if an error occured.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bit;

	if (index > sizeof(unsigned long int) * 8 - 1)
		return (-1);

	bit = 1 << index;

	if ((bit & n) > 0)
		return (1);

	return (0);
}
