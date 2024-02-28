#include "binary_trees.h"

/**
 * priint_node - prints data of a node
 * @i: int to print
 * Return: void
*/
void print_node(int i)
{
	printf("%d\n", i);
}

/**
 * binary_tree_preorder - entry point to goes through a binary tree using
 * pre-order traversal
 * @tree: a pointer to the root node
 * @func: a pointer to a function to call for each node
 * Return: nothing
*/

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if ((tree == NULL) || (func == NULL))
		return;

	print_node(tree->n);
	binary_tree_preorder(tree->left, print_node);
	binary_tree_preorder(tree->right, print_node);
}
