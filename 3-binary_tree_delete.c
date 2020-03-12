#include "binary_trees.h"

/**
 * binary_tree_delete - entry point
 * @tree: Pointer to the root node of the tree to delete
 *
 * Description: Write a function that deletes an entire binary tree
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
