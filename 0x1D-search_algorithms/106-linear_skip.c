#include "search_algos.h"
#include <math.h>

/**
 * linear_skip - Performs Jump search on a skip list of sorted integers.
 *
 * @list: Pointer to the head of the singly linked list.
 * @value: The integer value to search for in the singly linked list.
 *
 * Return: The pointer to the first node found containing `value`. NULL if
 * `value` was not found or `list` is NULL.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	size_t i;
	skiplist_t *lo, *hi;

	if (list == NULL)
		return (NULL);

	lo = list;
	hi = list->express;

	while (1)
	{
		if (hi->next == NULL)
			break;
		printf("Value checked at index [%zd] = [%d]\n", hi->index, hi->n);
		if (hi->n >= value)
			break;
		lo = hi;
		hi = hi->express;
		if (hi == NULL)
		{
			hi = lo;
			while (hi->next != NULL)
				hi = hi->next;
		}
	}

	printf("Value found between indexes [%zd] and [%zd]\n", lo->index, hi->index);

	for (i = lo->index; i < hi->index + 1; i++, lo = lo->next)
	{
		printf("Value checked at index [%zd] = [%d]\n", lo->index, lo->n);
		if (lo->n == value)
			return (lo);
	}

	return (NULL);
}
