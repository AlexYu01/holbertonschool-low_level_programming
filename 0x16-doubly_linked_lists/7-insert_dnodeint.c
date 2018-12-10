#include "lists.h"
/**
 * insert_node - Inserts the new node correctly into the list.
 *
 * @h: Double pointer to the beginning of the list.
 * @current: Pointer to the current node.
 * @new: Pointer to the new node.
 * @count: Current index of the node current.
 * @idx: Desired position of the new node.
 *
 * Return: void.
 */
void insert_node(dlistint_t **h, dlistint_t *current, dlistint_t *new,
		unsigned int count, unsigned int idx)
{
	if (current != NULL)
	{
		if (count != idx - 1)
		{
			if (current->prev != NULL)
				(current->prev)->next = new;
			new->prev = current->prev;
			current->prev = new;
		}
		else
		{
			current->next = new;
			new->next = NULL;
			new->prev = current;
		}
	}
	else
	{
		new->prev = NULL;
		*h = new;
	}
}

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

	if (count != idx && count != idx - 1)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = current;
	insert_node(h, current, new, count, idx);

	return (new);
}
