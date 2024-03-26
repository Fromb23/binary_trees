#include "binary_trees.h"

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);
	else
	{
		left_height = binary_tree_height(tree->left);
		right_height = binary_tree_height(tree->right);
		return max(left_height, right_height) + 1;
	}
}

size_t max(size_t a, size_t b)
{
	if (a > b)
		return a;
	else
		return b;
}
