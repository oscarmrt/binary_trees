#include "binary_trees.h"

/**
 * binary_tree_is_full - entry point
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Description: Write a function that checks if a binary tree is full
 * Return: If tree is NULL, your function must return 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int full = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	full = binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right);
	return (full);
}
