#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position of a
 * double linked list.
 *
 * @h: Double pointer to the head of the double linked list.
 * @idx: Index to insert the new node. With the head being 0.
 * @n: The value the new node will contain.
 *
 * Return: The address of the new node or NULL upon failure.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *current;
	unsigned int count;

	if (h == NULL)
		return (NULL);

	current = *h;
	count = 0;

	while (current != NULL)
	{
		if (count == idx)
			break;
		current = current->next;
		count++;
	}

	if (count != idx)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = current;
	if (current != NULL)
	{
		if (current->prev != NULL)
			(current->prev)->next = new;
		new->prev = current->prev;
		current->prev = new;
	}
	else
	{
		new->prev = NULL;
		*h = new;
	}

	return (new);
}
