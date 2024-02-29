#include "binary_trees.h"
/**
 * binary_tree_is_leaf - checks leaf
 * @node: pointer
 * Return: pointer
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);

	return (1);
}
