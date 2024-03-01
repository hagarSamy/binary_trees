#include "binary_trees.h"
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: a pointer to the root
 * Return: 1 if perfect or 0 if it is not or null
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int lh, rh;

	if (tree == NULL)
		return (0);
	lh = binary_tree_height(tree->left);
	rh = binary_tree_height(tree->right);
	if (lh == rh)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: a pointer to the root node
 * Return: height of the tree or 0 if tree is null
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);
	left_height = (tree->left) ? 1 + binary_tree_height(tree->left) : 0;
	right_height = (tree->right) ? 1 + binary_tree_height(tree->right) : 0;
	return (((left_height > right_height) ? left_height : right_height));
}
