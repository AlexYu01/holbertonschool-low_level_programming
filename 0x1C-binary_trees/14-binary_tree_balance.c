#include "binary_trees.h"

size_t traverse(const binary_tree_t *node, size_t height);

/**
 * binary_tree_balance - Measure the balance factor of a binary tree. If the
 * balance factor is > 0 then the tree is left-heavy, while < 0 is right-heavy.
 * If the balance factor is 0 then the tree is balanced.
 *
 * @tree: Pointer to the root node of a tree.
 *
 * Return: The balance factor of the tree. 0 if tree is NULL.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left_h, right_h;

	if (tree == NULL)
		return (0);

	left_h = 0;
	right_h = 0;
	if (tree->left != NULL)
		left_h = traverse(tree->left, left_h);
	if (tree->right != NULL)
		right_h = traverse(tree->right, right_h);

	return ((int) (left_h - right_h));
}

/**
 * traverse - Recursively travel down a binary tree starting with the left
 * branch.
 *
 * @node: Pointer to the current node.
 * @height: Height of the tree currently.
 *
 * Return: The greatest height between the left and right branches.
 */
size_t traverse(const binary_tree_t *node, size_t height)
{
	size_t left_h, right_h;

	height++;
	left_h = height;
	right_h = height;

	if (node->left != NULL)
		left_h = traverse(node->left, height);

	if (node->right != NULL)
		right_h = traverse(node->right, height);

	if (left_h > right_h)
		return (left_h);
	else
		return (right_h);
}

/**
 * find_imbalance - Search for imbalance within an AVL tree if it exists.
 *
 * @cur: Pointer to the current node within AVL tree.
 * @height: Pointer to counter for current height of the tree.
 *
 * Return: Pointer to the node with the imbalance, NULL if there is no
 * imbalance.
 */
avl_t *find_imbalance(avl_t *cur, int *height)
{
	int left_h, right_h, diff;
	avl_t *imbalance;

	imbalance = NULL;

	if (cur == NULL)
		return (NULL);

	(*height)++;
	left_h = *height;
	right_h = *height;

	imbalance = find_imbalance(cur->left, &left_h);
	if (imbalance != NULL)
		return (imbalance);

	imbalance = find_imbalance(cur->right, &right_h);
	if (imbalance != NULL)
		return (imbalance);

	if (left_h < right_h)
		(*height) = right_h;
	else
		(*height) = left_h;

	diff = left_h - right_h;
	if (diff < -1 || diff > 1)
		return (cur);
	else
		return (NULL);
}

/**
 * fix_imbalance - Correct the imbalance within the subtree.
 *
 * @imbal: Pointer to the root of the imbalanced tree.
 *
 * Return: New root after rotation(s).
 */
avl_t *fix_imbalance(avl_t *imbal)
{
	int bal_fac, child_bal_fac;
	avl_t *new_root;

	bal_fac = binary_tree_balance(imbal);
	if (bal_fac > 0)
	{
		child_bal_fac = binary_tree_balance(imbal->left);
		if (child_bal_fac > 0)
		{
			new_root = binary_tree_rotate_right(imbal);
		}
		else
		{
			new_root = binary_tree_rotate_left(imbal->left);
			new_root = binary_tree_rotate_right(imbal);
		}
	}
	else
	{
		child_bal_fac = binary_tree_balance(imbal->right);
		if (child_bal_fac > 0)
		{
			new_root = binary_tree_rotate_right(imbal->right);
			new_root = binary_tree_rotate_left(imbal);
		}
		else
		{
			new_root = binary_tree_rotate_left(imbal);
		}
	}

	return (new_root);
}
