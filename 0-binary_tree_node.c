#include"binary_tree.h"
#include<stdlib.h>

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
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == null)
		return (NULL);
	new_node->parent = parent;
	new_node->left = new_node->right = NULL;
	new_node->n = value;
	return (new_node);
}
