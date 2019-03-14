#include "binary_trees.h"
#include <stdio.h>

avl_t *insert_in_branch(avl_t *cur, int value);

/**
 * avl_insert - Inserts a value in an AVL tree.
 *
 * @tree: Double pointer to the root node of the AVL tree.
 * @value: the value to store in the node to be inserted.
 *
 * Return: Pointer to the created node, or NULL upon failure.
 */
avl_t *avl_insert(avl_t **tree, int value)
{
	avl_t *new, *imbalanced, *imbal_fixed;
	int height = 0;

	new = NULL;
	imbalanced = NULL;

	if (tree == NULL)
		return (NULL);

	if (*tree != NULL)
	{
		new = insert_in_branch(*tree, value);
		imbalanced = find_imbalance(*tree, &height);
		if (imbalanced != NULL)
			imbal_fixed = fix_imbalance(imbalanced);
		if (imbalanced == *tree)
			*tree = imbal_fixed;
	}
	else
	{
		new = binary_tree_node(NULL, value);
		*tree = new;
	}

	return (new);
}

/**
 * insert_in_branch - Insert the value into the sub-branch of root.
 *
 * @cur: Child of the root.
 * @value: The value to store in the node to be inserted.
 *
 * Return: Pointer to the created node, or NULL upon failure.
 */
avl_t *insert_in_branch(avl_t *cur, int value)
{
	avl_t *new;

	new = NULL;
	while (new == NULL)
	{
		if (value == cur->n)
			return (NULL);
		if (value < cur->n)
		{
			if (cur->left == NULL)
			{
				new = binary_tree_node(cur, value);
				cur->left = new;
			}
			cur = cur->left;
		}
		else
		{
			if (cur->right == NULL)
			{
				new = binary_tree_node(cur, value);
				cur->right = new;
			}
			cur = cur->right;
		}
	}

	return (new);
}
