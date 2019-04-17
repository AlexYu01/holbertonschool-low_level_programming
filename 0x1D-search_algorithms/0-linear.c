#include "search_algos.h"

/**
 * linear_search - Perform linear search to find `value` within the array
 * `array`.
 *
 * @array: Pointer to an integer array.
 * @size: Size of the array.
 * @value: The integer value to search for.
 *
 * Return: The index where `value` is found in `array`. -1 if `value` was not
 * found or `array` is NULL
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL || size < 1)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%zd] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}

	return (-1);
}
