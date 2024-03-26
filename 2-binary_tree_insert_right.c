#include "binary_trees.h"

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_node;

	right_node = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (right_node == NULL)
		return (NULL);

	if (parent == NULL)
		return (NULL);

	right_node->n = value;
	if (parent->right != NULL)
	{
		parent->right->parent = right_node;
		right_node->right = parent->right;
		parent->right = right_node;
		right_node->parent = parent;
	}
	else
	{
		parent->right = right_node;
		right_node->parent = parent;
	}
	right_node->left = NULL;

	return (right_node);
}
