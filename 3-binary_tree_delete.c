#include "binary_trees.h"

/**
 * binary_tree_delete - entry point to delete an entire tree
 * @tree: a pointer to the root node
 * Return: nothing
*/

void binary_tree_delete(binary_tree_t *tree)
{
    if (tree == NULL)
        return;

