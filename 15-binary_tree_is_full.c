#include "binary_trees.h"
/**
 * binary_tree_is_ful - checks if a binary tree is full
 * @tree: a pointer to the root
 * Return: 1 if full or 0 if it is not or null
*/

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if ((tree->left != NULL) && (tree->right != NULL))
	{
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	}
	else if ((tree->left == NULL) && (tree->right == NULL))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
