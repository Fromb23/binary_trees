#include "binary_trees.h"

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_node;

	left_node = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (left_node == NULL)
		return (NULL);

	if (parent == NULL)
		return (NULL);

	left_node->n = value;
	if (parent->left != NULL)
	{
		left_node->left = parent->left;
		parent->left->parent = left_node;
		parent->left = left_node;
		left_node->parent = parent;

	}
	else
	{
		parent->left = left_node;
		left_node->parent = parent;
	}
	left_node->right = NULL;

	return (left_node);
}
