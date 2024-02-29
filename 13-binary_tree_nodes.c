#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes with at least one child
 * @tree: a pointer to the root
 * Return: number of nodes or 0 if it's null
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t leftNodes, rightNodes;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL || tree->right != NULL)
	{
		leftNodes = binary_tree_nodes(tree->left);
		rightNodes = binary_tree_nodes(tree->right);
		return (leftNodes + rightNodes + 1);
	}
	return (0);
}
