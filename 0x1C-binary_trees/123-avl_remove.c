#include "binary_trees.h"
#include <stdlib.h>

avl_t *successor(avl_t *node);
avl_t *avl_replace(avl_t *parent, avl_t *node, avl_t *suc);
avl_t *find_imbalance(avl_t *cur, int *height);
avl_t *fix_imbalance(avl_t *imbal);

/**
 * avl_remove - Removes a value from the AVL tree if it exists.
 *
 * @root: Pointer to the root node of the tree.
 * @value: Value to remove from the tree.
 *
 * Return: Pointer to the new root of the tree.
 */
avl_t *avl_remove(avl_t *root, int value)
{
	avl_t *node, *parent, *suc, *replacement;
	int height = 0;

	if (root == NULL)
		return (NULL);

	node = root;
	while (node != NULL)
	{
		if (node->n == value)
			break;
		if (value < node->n)
			node = node->left;
		else
			node = node->right;
	}
	if (node == NULL)
		return (NULL);

	suc = NULL;
	parent = node->parent;
	if (node->left != NULL && node->right != NULL)
		suc = successor(node->right);
	else if (node->left != NULL)
		suc = node->left;
	else if (node->right != NULL)
		suc = node->right;

	replacement = avl_replace(parent, node, suc);
	if (root == node)
		root = replacement;

	free(node);

	node = find_imbalance(root, &height);
	if (node != NULL)
		replacement = fix_imbalance(node);
	if (node == root)
		root = replacement;

	return (root);
}

/**
 * avl_replace - Replaces the node to be deleted with a sucessor.
 *
 * @parent: Pointer to the parent of the node to be deleted.
 * @node: Pointer to the node to be deleted.
 * @suc: Pointer to the successor of the node to be deleted.
 *
 * Return: The successor of the node to be deleted.
 */
avl_t *avl_replace(avl_t *parent, avl_t *node, avl_t *suc)
{
	avl_t *r_child;

	if (parent != NULL)
	{
		if (parent->left == node)
			parent->left = suc;
		else
			parent->right = suc;
	}
	if (suc != NULL)
	{
		if (node->left != NULL && node->right != NULL)
		{
			if (node->left != suc)
			{
				suc->left = node->left;
				node->left->parent = suc;
			}
			if (node->right != suc)
			{
				r_child = suc;
				while (r_child->right != NULL)
					r_child = r_child->right;
				r_child->right = node->right;
				node->right->parent = r_child;
			}
		}
		if (suc->parent != NULL)
		{
			if (suc->parent->left == suc)
				suc->parent->left = NULL;
			else
				suc->parent->right = NULL;
		}
		suc->parent = parent;
	}

	return (suc);
}

/**
 * successor - Searches for the first in-order successor to the node that is
 * to be deleted.
 *
 * @node: Pointer to the current node.
 *
 * Return: Pointer to the successor.
 */
avl_t *successor(avl_t *node)
{
	while (node->left != NULL)
		node = node->left;

	return (node);
}
