#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers, followed by a new
 * line. Numbers are separated by a comma and followed by a space.
 * @a, Pointer to an array of integers.
 * @n, Number of elements to be printed.
 *
 * Return: void.
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if(i < n - 1)
			printf(", ");
		else
			printf("\n");
	}
}
