#include "binary_trees.h"

void reorder_heap(heap_t **root, heap_t *node);
void swap_asc(heap_t *node_p, heap_t *node);
heap_t *insert_node(heap_t *parent, int value);
heap_t *has_one_child(heap_t *root);
heap_t *has_no_child(heap_t *root);

/**
 * heap_insert - Inserts a value into a max binary heap.
 *
 * @root: Double pointer to the root of the max binary heap.
 * @value: The value to store in the node to be inserted.
 *
 * Return: Pointer to the created node or NULL on failure.
 */
heap_t *heap_insert(heap_t **root, int value)
{
	heap_t *parent, *new;

	if (root == NULL)
		return (NULL);

	if (*root == NULL)
	{
		*root = binary_tree_node(NULL, value);
		return (*root);
	}

	parent = has_one_child(*root);
	if (parent == NULL)
		parent = has_no_child(*root);
	if (parent == NULL)
	{
		parent = *root;
		while (parent->left != NULL)
			parent = parent->left;
	}
	new = insert_node(parent, value);
	if (new == NULL)
		return (NULL);

	reorder_heap(root, new);
	return (new);
}

/**
 * reorder_heap - Readjusts the heap if heap property is broken.
 *
 * @root: Double pointer to the root of the entire max heap tree.
 * @node: Current node that is the newly created node.
 */
void reorder_heap(heap_t **root, heap_t *node)
{
	heap_t *parent;

	parent = node->parent;

	while (parent != NULL && node->n > parent->n)
	{
		swap_asc(parent, node);
		if (parent == *root)
			*root = node;
		parent = node->parent;
	}
}

/**
 * swap_asc - Swaps the newly inserted node with its parent.
 *
 * @node_p: Pointer to the node's parent.
 * @node: Pointer to the newly inserted node.
 */
void swap_asc(heap_t *node_p, heap_t *node)
{
	heap_t *temp;

	node->parent = node_p->parent;
	if (node->parent != NULL)
	{
		if (node->parent->left == node_p)
			node->parent->left = node;
		else
			node->parent->right = node;
	}
	node_p->parent = node;

	if (node_p->left == node)
	{
		temp = node_p->right;
		node_p->right = node->right;
		if (node_p->right != NULL)
			node_p->right->parent = node_p;
		node->right = temp;
		if (node->right != NULL)
			node->right->parent = node;

		node_p->left = node->left;
		if (node_p->left != NULL)
			node_p->left->parent = node_p;
		node->left = node_p;
	}
	else
	{
		node_p->right = node->right;
		if (node_p->right != NULL)
			node_p->right->parent = node_p;
		node->right = node_p;

		temp = node_p->left;
		node_p->left = node->left;
		if (node_p->left != NULL)
			node_p->left->parent = node_p;
		node->left = temp;
		if (node->left != NULL)
			node->left->parent = node;
	}
}

/**
 * insert_node - Inserts a node into the max binary heap.
 *
 * @parent: The parent of the inserted node.
 * @value: The value to store in the inserted node.
 *
 * Return: Pointer to the inserted node, or NULL on failure.
 */
heap_t *insert_node(heap_t *parent, int value)
{
	heap_t *node;

	node = binary_tree_node(parent, value);
	if (parent->left == NULL)
		parent->left = node;
	else
		parent->right = node;

	return (node);
}

/**
 * has_one_child - Checks the max binary heap for a parent with only one child
 * (left).
 *
 * @root: Pointer to the root of the current tree.
 *
 * Return: Pointer to a parent node with only one child or NULL if there's
 * none.
 */
heap_t *has_one_child(heap_t *root)
{
	heap_t *l;
	heap_t *r;


	if (root == NULL)
		return (NULL);
	if (root->left != NULL && root->right == NULL)
		return (root);

	l = has_one_child(root->left);
	if (l != NULL)
		return (l);
	r = has_one_child(root->right);
	if (r != NULL)
		return (r);

	return (NULL);
}

/**
 * has_no_child - Checks the max binary heap for a parent with no children for
 * a level that has not been filled.
 *
 * @root: Pointer to the root of the current tree.
 *
 * Return: Pointer to a parent node with no child on an existing level, or
 * NULL if there's none.
 */
heap_t *has_no_child(heap_t *root)
{
	heap_t *l;
	heap_t *r;
	heap_t *sibling;

	if (root == NULL)
		return (NULL);

	if (root->left == NULL && root->right == NULL)
	{
		if (root->parent != NULL)
		{
			if (root->parent->left == root)
				sibling = root->parent->right;
			else
				sibling = root->parent->left;
			if (sibling->right != NULL)
				return (root);
		}
	}

	l = has_no_child(root->left);
	if (l != NULL)
		return (l);
	r = has_no_child(root->right);
	if (r != NULL)
		return (r);

	return (NULL);
}
