#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "hash_tables.h"

void insert_sorted(shash_table_t *ht, shash_node_t *new);

/**
 * shash_table_create - Allocates memory for a sorted hash table.
 *
 * @size: ulong int representing the size of a new sorted hash table.
 *
 * Return: A pointer to the newly allocated memory space for the hash table.
 * NULL on error.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new;

	if (size == 0)
		return (NULL);

	new = malloc(sizeof(shash_table_t));
	if (new != NULL)
	{
		new->array = malloc(sizeof(shash_node_t *) * size);
		if (new->array == NULL)
			return (NULL);
		new->size = size;
	}

	return (new);
}

/**
 * shash_table_set - Adds an element to the sorted hash table. Key collisions
 * result in the creation of a singly linkedlist at the index, with the newest
 * value added at the beginning of the list. If a key-value pair exist already,
 * over write the old value with the new value.
 *
 * @ht: Pointer to the hash table.
 * @key: The key inside the hash table.
 * @value: The corresponding value of the key.
 *
 * Return: 1 upon success, otherwise 0.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	char *v_copy, *k_copy;
	unsigned long int idx;
	shash_node_t *cur, *new;

	if (ht == NULL || key == NULL || strcmp(key, "") == 0 || value == NULL)
		return (0);

	v_copy = strdup(value);
	if (v_copy == NULL)
		return (0);

	idx = key_index((const unsigned char *) key, ht->size);
	cur = (ht->array)[idx];
	while (cur != NULL)
	{
		if (strcmp(cur->key, key) == 0)
		{
			free(cur->value);
			cur->value = v_copy;
			break;
		}
		cur = cur->next;
	}
	k_copy = strdup(key);
	if (k_copy == NULL)
		return (0);

	new = malloc(sizeof(shash_node_t));
	if (new == NULL)
	{
		free(v_copy);
		free(k_copy);
		return (0);
	}
	new->key = k_copy;
	new->value = v_copy;
	new->next = (ht->array)[idx];
	(ht->array)[idx] = new;
	insert_sorted(ht, new);

	return (1);
}

/**
 * insert_sorted - Places the new element in the correct position of a sorted
 * hash table.
 *
 * @ht: Pointer to the hash table.
 * @new: Pointer to the newly created node.
 */
void insert_sorted(shash_table_t *ht, shash_node_t *new)
{
	shash_node_t *cur;

	if (ht->shead == NULL)
	{
		ht->shead = new;
		ht->stail = new;
		return;
	}
	cur = ht->shead;

	while (cur != NULL)
	{
		if (strcmp(cur->key, new->key) > 0)
		{
			new->snext = cur;
			new->sprev = cur->sprev;
			if (cur->sprev == NULL)
				ht->shead = new;
			else
				new->sprev->snext = new;
			cur->sprev = new;
			break;
		}
		cur = cur->snext;
	}
	if (cur == NULL)
	{
		cur = ht->stail;
		new->sprev = cur;
		cur->snext = new;
		ht->stail = new;
	}
}

/**
 * shash_table_print - Prints a sorted hash table.
 *
 * @ht: Pointer to a hash table.
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *cur;
	char comma = 0;

	if (ht != NULL && ht->shead != NULL)
	{
		printf("{");
		for (cur = ht->shead; cur != NULL; cur = cur->snext)
		{
			if (comma == 1)
				printf(", ");
			printf("'%s': '%s'", cur->key, cur->value);
			comma = 1;
		}
		printf("}\n");
	}
}

/**
 * shash_table_print_rev - Prints a sorted hash table in reverse.
 *
 * @ht: Pointer to a hash table.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *cur;
	char comma = 0;

	if (ht != NULL && ht->shead != NULL)
	{
		printf("{");
		for (cur = ht->stail; cur != NULL; cur = cur->sprev)
		{
			if (comma == 1)
				printf(", ");
			printf("'%s': '%s'", cur->key, cur->value);
			comma = 1;
		}
		printf("}\n");
	}
}

/**
 * shash_table_delete - Deletes a sorted hash table by freeing up memory and
 * setting the `ht` to NULL.
 *
 * @ht: Pointer to the hash table.
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *cur, *nxt;
	unsigned long int idx;

	if (ht == NULL)
		return;

	for (idx = 0; idx < ht->size; idx++)
	{
		cur = (ht->array)[idx];
		while (cur != NULL)
		{
			nxt = cur->next;
			free(cur->key);
			free(cur->value);
			free(cur);
			cur = nxt;
		}
	}
	free(ht->array);
	free(ht);
}
