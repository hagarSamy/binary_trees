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

    binary_tree_delete(tree->left);
    binary_tree_delete(tree->right);
    if (tree->parent != NULL)
    {
        if (tree->parent->left == tree)
            tree->parent->left = NULL;
        else if (tree->parent->right == tree)
            tree->parent->right = NULL;
    }
    free(tree);
}
