#include "binary_trees.h"

/**
 * binary_tree_node - entry point
 * @parent: a pointer to the parent node
 * @value: int value to be stored in the created node
 * Return: a pointer to the new node or NULL on failure
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	newNode = malloc(sizeof(binary_tree_t));
	if (newNode == NULL)
		return (NULL);
	if (parent != NULL)
	{
		if (parent->right == NULL)
		{
			parent->right = newNode;
		}
		else if (parent->left == NULL)
		{
			parent->left = newNode;
		}
	}
	newNode->left = NULL;
	newNode->right = NULL;
	newNode->n = value;
	newNode->parent = parent;
	return (newNode);
}
