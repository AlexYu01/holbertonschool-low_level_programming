#include "binary_trees.h"

char traverse(const binary_tree_t *node, char *g_child);

/**
 * binary_tree_is_complete - Checks if the tree is complete.
 *
 * @tree: Pointer to the root node of the tree to check.
 *
 * Return: 1 if the tree is complete, 0 otherwise.
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	char node_g_child = 0;

	if (tree == NULL)
		return (0);
	return ((int) traverse(tree, &node_g_child));
}

/**
 * traverse - Traverses a binary tree depth-first.
 *
 * @node: Pointer to the current root of the tree.
 * @g_child: Pointer to the counter for the number of grand children of the
 * parent node of node.
 *
 * Return: 1 if the tree is complete, 0 otherwise.
 */
char traverse(const binary_tree_t *node, char *g_child)
{
	char left, right, node_lg_child, node_rg_child;

	node_lg_child = 0;
	node_rg_child = 0;
	left = 0;
	right = 0;
	if (node->left != NULL)
	{
		(*g_child)++;
		left = traverse(node->left, &node_lg_child);
	}

	if (node->right != NULL)
	{
		(*g_child)++;
		right = traverse(node->right, &node_rg_child);
	}

	if ((left ^ right) && (node_rg_child != 0 || node_lg_child != 0))
		return (0);

	if (left == 0 && right == 0 && (node_rg_child != 0 || node_lg_child != 0))
		return (0);
	if (left == 0 && right == 1)
		return (0);

	if (node_lg_child <= 1 && node_rg_child >= 1)
		return (0);

	return (1);
}
