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

	left_height = length(tree->left);
	right_height = length(tree->right);
	return (left_height - right_height);
}

/**
 * length - gets length of a node
 * @parent: node to get its length
 * Return: length of node or 0 if it's null
*/

int length(binary_tree_t *parent)
{
	int llength, rlength;

	if (parent == NULL)
		return (0);
	llength = length(parent->left);
	rlength = length(parent->right);
	if (llength > rlength)
		return (llength + 1);
	else
		return (rlength + 1);
}
