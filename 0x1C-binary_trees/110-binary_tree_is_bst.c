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
	int min, max;

	if (tree == NULL)
		return (0);

	min = INT_MIN;
	max = INT_MAX;
	if (tree->parent != NULL)
	{
		if (tree->parent->left == tree)
			max = tree->parent->n;
		else
			min = tree->parent->n;
	}
	return (traverse(tree->left, min, tree->n) &&
			traverse(tree->right, tree->n, max));
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
	if (node == NULL)
		return (1);

	if (node->n >= min && node->n <= max)
	{
		if (node->parent != NULL)
		{
			if (node->parent->n == node->n)
				return (0);
		}
		return (traverse(node->left, min, node->n) &&
				traverse(node->right, node->n, max));
	}

	return (0);
}
