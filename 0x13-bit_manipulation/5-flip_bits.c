#include "holberton.h"

/**
 * flip_bits - Returns the number of bits you would need to flip to get from
 * one number to another.
 *
 * @n: unsigned long int value.
 * @m: unsigned logn int value.
 *
 * Return: The number of bits flipped to go from n to m.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count;
	unsigned int bit;
	unsigned int index;
	unsigned int max_bits;
	unsigned int exclusive;

	bit = 1;
	count = 0;
	max_bits = sizeof(n) * 8;
	exclusive = n ^ m;

	for (index = 0; index < max_bits; index++)
	{
		if (exclusive & bit)
			count++;
		bit = bit << 1;
	}
	return (count);
}
