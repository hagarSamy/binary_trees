#include "binary_trees.h"
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: a pointer to the root
 * Return: balance factor of the tree or 0 if it is null
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = height(tree->left);
	right_height = height(tree->right);
	return (left_height - right_height);
}

/**
 * height - gets height of a node
 * @parent: node to get its height
 * Return: height of node or 0 if it's null
*/

int height(binary_tree_t *parent)
{
	int lheight, rheight;

	if (parent == NULL)
		return (0);
	lheight = height(parent->left);
	rheight = height(parent->right);
	if (lheight > rheight)
		return (lheight + 1);
	else
		return (rheight + 1);
}
