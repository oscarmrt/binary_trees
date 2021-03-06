#include "binary_trees.h"
/**
 * binary_tree_size - entry point
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Description: Write a function that measures the size of a binary tree
 * Return: If tree is NULL, your function must return 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size;

	if (tree == NULL)
		return (0);

	size = binary_tree_size(tree->right) + binary_tree_size(tree->left) + 1;
	return (size);
}

/**
 * binary_tree_is_perfect - entry point
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Description: Write a function that checks if a binary tree is perfect
 * Return: If tree is NULL, your function must return 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (binary_tree_size(tree->left) == binary_tree_size(tree->right))
		return (1);
	return (0);
}
