#include "binary_trees.h"
/**
 * binary_tree_size - measures the size of a tree
 * @tree: a pointer to the root
 * Return: size of the tree or 0 if it is null
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t leftS, rightS;

	if (tree == NULL)
		return (0);
	leftS = binary_tree_size(tree->left);
	rightS = binary_tree_size(tree->right);
	return (leftS + rightS + 1);
}
