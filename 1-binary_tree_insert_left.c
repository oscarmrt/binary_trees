#include "binary_trees.h"

/**
 * binary_tree_insert_left - entry point
 * @parent: Pointer to the parent node
 * @value:  value to put in the new node
 *
 * Description: Write a function that inserts a node
 * as the left-child of another node
 * Return: pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);
	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);
	new_node->parent = parent;
	new_node->n = value;
	if (parent->left != NULL)
		{
		new_node->left = parent->left;
		new_node->left->parent = new_node;
		}
	parent->left = new_node;
	return (new_node);
}
