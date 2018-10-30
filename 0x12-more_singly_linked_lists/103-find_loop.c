#include "lists.h"

/**
 * find_listint_loop - Finds the loop in a linked list.
 * @head: listint_t pointer to the beginning of the list.
 *
 * Return: Address of the node where the loop starts, or NULL if there is no
 * loop.
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *ptr;

	ptr = head;

	while (ptr)
	{
		if (ptr->next && ((void *) ptr > (void *) ptr->next))
			ptr = ptr->next;
		else
			return (ptr->next);
	}
	return (NULL);
}
