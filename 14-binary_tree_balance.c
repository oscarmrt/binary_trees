#include "binary_trees.h"

/**
 * binary_tree_height - entry point
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Description: Write a function that measures the height of a binary tree
 * Return: If tree is NULL, your function must return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_h = 0;
	size_t right_h = 0;

	if (tree == NULL)
		return (0);
	if (tree->left)
		left_h = binary_tree_height(tree->left) + 1;
	if (tree->right)
		right_h = binary_tree_height(tree->right) + 1;
	if (left_h < right_h)
		return (right_h);
	return (left_h);
}

/**
 * binary_tree_balance - entry point
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Description: Write a function that measures
 * the balance factor of a binary tree
 * Return: If tree is NULL, your function must return 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left_h = 0;
	size_t right_h = 0;

	if (tree == NULL)
		return (0);
	if (tree->left)
	left_h = binary_tree_height(tree->left);
	if (tree->right)
	right_h = binary_tree_height(tree->right);
	return (left_h - right_h);
}
