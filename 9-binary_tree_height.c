#include "binary_trees.h"
/**
 * binary_tree_height: measures height
 * @tree: pointer
 * Return: 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t lft = 0, right = 0;

		lft = tree->left ? 1 +
binary_tree_height(tree->left) : 0;
		right = tree->right ? 1 +
binary_tree_height(tree->right) : 0;
		return ((lft > right) ? lft : right);
	}
	return (0);
}
