#include "lists.h"
#include <stdio.h>
/**
 * free_listint_safe - Frees a list_t list.
 * @h: Pointer to a pointer to the beginning of the list.
 *
 * Return: Size of the freed list.
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *next;
	size_t count;

	count = 0;
	if (!*h)
		return (count);

	while (*h)
	{
		count++;
		next = (*h)->next;
		if (next && ((void *) next) < (void *) (*h))
		{
			free((*h));
			*h = next;
		}
		else
		{
			free((*h));
			break;
		}
	}
	*h = NULL;
	return (count);
}
