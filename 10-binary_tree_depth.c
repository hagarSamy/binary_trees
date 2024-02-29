#include "binary_trees.h"
/**
 * binary_tree_depth - measures the depth of a node
 * @tree: a pointer to the node
 * Return: depth of the node or 0 if node is null
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if ((tree == NULL) || (tree->parent == NULL))
		return (0);
	return (binary_tree_depth(tree->parent) + 1);
}
