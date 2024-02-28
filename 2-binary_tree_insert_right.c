#include "binary_trees.h"

/**
 * binary_tree_insert_right - entry point
 * @parent: a pointer to the parent node
 * @value: int value to be stored in the created node
 * Return: a pointer to the new node or NULL on failure
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *newNode;

	if (parent == NULL)
		return (NULL);
	newNode = malloc(sizeof(binary_tree_t));
	if (newNode == NULL)
		return (NULL);
	newNode->parent = parent;
	newNode->right = NULL;
	newNode->left = NULL;
	if (parent->right != NULL)
	{
		parent->right->parent = newNode;
		newNode->right = parent->right;
		parent->right = newNode;
	}
	else
		parent->right = newNode;
	newNode->n = value;
	return (newNode);
}
