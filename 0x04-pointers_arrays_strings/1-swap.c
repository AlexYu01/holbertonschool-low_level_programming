#include "holberton.h"

/**
 * swap_int - Swaps the values of two integers.
 * @a: A pointer to an int.
 * @b: A pointer to an int.
 *
 * Return: void.
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *b;
	*b = *a;
	*a = temp;
}
