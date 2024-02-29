#include "binary_trees.h"

/**
 * binary_tree_node - Creates a new binary tree node
 *
 * @parent: Pointer to the parent node
 * @value: Value to be stored in the new node
 *
 * Return: Pointer to the newly created node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *n;

	n = malloc(sizeof(binary_tree_t));
	if (n == NULL)
		return (NULL);
	n->n = value;
	n->parent = parent;
	n->left = NULL;
	n->right = NULL;
	return (n);
}
