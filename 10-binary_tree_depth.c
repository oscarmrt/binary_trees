#include "binary_trees.h"

/**
 * binary_tree_depth - entry point
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Description: Write a function that measures the depth
 * of a node in a binary tree
 * Return: If tree is NULL, your function must return 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t tree_d = 0;

	if (tree == NULL)
		return (0);

	if (tree->parent)
		tree_d = binary_tree_depth(tree->parent) + 1;
	return (tree_d);
}
