#include "binary_trees.h"

/**
 * binary_tree_insert_left - entry point
 * @parent: a pointer to the parent node
 * @value: int value to be stored in the created node
 * Return: a pointer to the new node or NULL on failure
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	newNode = malloc(sizeof(binary_tree_t));
	if ((newNode == NULL) || (parent == NULL))
		return (NULL);
	newNode->parent = parent;
	newNode->right = NULL;
	newNode->left = NULL;
	if (parent->left != NULL)
	{
		parent->left->parent = newNode;
		newNode->left = parent->left;
		parent->left = newNode;
	}
	else
		parent->left = newNode;
	newNode->n = value;
	return (newNode);
}
