#include "binary_trees.h"
/**
traversal
 * @tree: a pointer to the root node * binary_tree_inorder - entry point to goes through a binary tree using
 * inorder traversal
 * @func: a pointer to a function to call for each node
 * Return: nothing
*/

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if ((tree == NULL) || (func == NULL))
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
