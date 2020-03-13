#include "binary_trees.h"

/**
 * binary_tree_nodes - entry point
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Description: Write a function that counts the nodes
 * with at least 1 child in a binary tree
 * Return: If tree is NULL, your function must return 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t ct = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	ct = binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1;
	return (ct);
}
