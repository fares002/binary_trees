#include "binary_trees.h"
/**
 * binary_tree_inorder: binary tree in order
 * @tree: pointer
 * @func: pointer
 * Return: 0
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->m);
		binary_tree_inorder(tree->right, func);
	}
}
