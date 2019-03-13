#include "binary_trees.h"
#include <limits.h>

char traverse(const binary_tree_t *node, int min, int max);

/**
 * binary_tree_is_bst - Checks if a binary tree is valid.
 *
 * @tree: Pointer to the root node of the tree to check.
 *
 * Return: 1 if the tree is valid BST, 0 otherwise.
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	int left, right;

	left = 1;
	right = 1;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		left = traverse(tree->left, INT_MIN, tree->n);
	if (tree->right != NULL)
		right = traverse(tree->right, tree->n, INT_MAX);

	if (left != 1 || right != 1)
		return (0);
	else
		return (1);
}

/**
 * traverse - Traverse the tree to check if it is a Binary search tree.
 *
 * @node: Pointer to the current root node.
 * @min: The min value the node can have.
 * @max: The max value the node can have.
 *
 * Return: 1 if the tree is a BST, 0 otherwise. 0 is also returned if a node
 * has the same value as its' parent.
 */
char traverse(const binary_tree_t *node, int min, int max)
{
	char left, right;

	left = 1;
	right = 1;

	if (node->n >= min && node->n <= max)
	{
		if (node->parent != NULL)
		{
			if (node->parent->n == node->n)
				return (0);
		}
		if (node->left != NULL)
			left = traverse(node->left, min, node->n);
		if (node->right != NULL)
			right = traverse(node->right, node->n, max);
		if (left != 1 || right != 1)
			return (0);

		return (1);
	}

	return (0);
}
