#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix of
 * integers.
 * @a: Pointer to matrix.
 * @size: Size of the matrix.
 * Return: void.
 */

void print_diagsums(int *a, int size)
{
	int sum1;
	int sum2;
	int index;

	sum1 = 0;
	sum2 = 0;

	for (index = 0; index < size * size; index += size + 1)
		sum1 += *(a + index);

	for (index = size - 1; index < size * size - (size - 1); index += size - 1)
		sum2 += *(a + index);

	printf("%d, %d\n", sum1, sum2);
}

