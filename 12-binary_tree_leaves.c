#include "binary_trees.h"

/**
 * binary_tree_leaves - entry point
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Description: Write a function that counts the leaves in a binary tree
 * Return: If tree is NULL, your function must return 0
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	leaves = binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);
	return (leaves);
}
