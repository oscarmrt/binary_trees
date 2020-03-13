#include "binary_trees.h"
/**
 * binary_tree_sibling - entry point
 * @node: pointer to the root node of the tree to measure the height
 *
 * Description: Write a function that finds the sibling of a node
 * Return: pointer to the sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node->parent == NULL || node == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
