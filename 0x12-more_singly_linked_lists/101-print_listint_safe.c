#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - Prints a lintint_t linked list.
 * @head: const listint_t pointer to the beginning of the list.
 *
 * Return: the size of the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	unsigned int count;
	const listint_t *ptr;

	count = 0;
	ptr = head;
	if (!head)
		exit(98); /* not sure to exit 98 here. */
	while (ptr)
	{
		printf("[%p] %d\n", (void *) ptr, ptr->n);
		count++;
		if (ptr->next && ((void *) ptr->next < (void *) ptr))
			ptr = ptr->next;
		else
			break;
	}
	if (ptr->next)
		printf("-> [%p] %d\n", (void *) ptr->next, (ptr->next)->n);
	return (count);
}
