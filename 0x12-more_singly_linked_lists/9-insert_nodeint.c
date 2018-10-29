#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given posiion.
 * @head: Pointer to a pointer to the beginning of the list.
 * @idx: unsigned int value representing the index at which the new node should
 * be inserted.
 *
 * Return: The address of the new node or NULL if it failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr;
	listint_t *new_node;
	listint_t *previous;
	unsigned int index;

	ptr = *head;
	index = 0;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;

	if (idx == 0)
	{
		if (*head)
			new_node->next = *head;
		else
			new_node->next = NULL;
		*head = new_node;
		return (new_node);
	}
	while (ptr)
	{
		if (index == idx)
		{
			new_node->next = ptr;
			previous->next = new_node;
			return (new_node);
		}
		else
		{
			index++;
			previous = ptr;
			ptr = ptr->next;
		}
	}
	free(new_node);
	return (NULL);
}
