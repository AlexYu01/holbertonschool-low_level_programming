#include "holberton.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 *
 * @n: unsigned long int value.
 * @index: unsigned int value of index to set bit.
 *
 * Return: 1 if successful, -1 if an error occured.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bit;

	if (index > sizeof(*n) * 8 - 1)
		return (-1);

	bit = 1 << index;

	if ((*n & bit) == 0)
		*n += bit;

	return (1);
}
