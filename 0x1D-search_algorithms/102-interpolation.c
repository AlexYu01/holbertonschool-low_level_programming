#include "search_algos.h"

/**
 * interpolation_search - Performs interpolation search on a sorted array of
 * integers.
 *
 * @array: Pointer to a sorted array of integers.
 * @size: The size of the array.
 * @value: The value to search for in the array.
 *
 * Return: The index at which `value` was found. -1 if the array is NULL or
 * `value` was not found.
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, lo, hi;

	if (array == NULL || size < 1)
		return (-1);

	lo = 0;
	hi = size - 1;

	while ((array[hi] != array[lo]) && array[lo] < value)
	{
		pos = lo + (((double)(hi - lo) / (array[hi] - array[lo])) *
				(value - array[lo]));
		if (pos >= size)
		{
			printf("Value checked array[%zd] is out of range\n", pos);
			return (-1);
		}
		printf("Value checked array[%zd] = [%d]\n", pos, array[pos]);

		if (value == array[pos])
			return ((int) pos);
		else if (value > array[pos])
			lo = pos + 1;
		else
			hi = pos - 1;
	}

	printf("Value checked array[%zd] = [%d]\n", lo, array[lo]);
	if (value == array[lo])
		return ((int) lo);
	else
		return (-1);
}
