#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: A pointer to the root node of the tree.
 *
 * Return: The balance factor of the tree, or 0 if tree is NULL.
 **/

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_max_height(tree->left);
	right_height = binary_tree_max_height(tree->right);

	return (left_height - right_height);
}

/**
 * binary_tree_max_height - Measures the maximum height of a binary tree.
 * @tree: A pointer to the root node of the tree.
 *
 * Return: The maximum height of the tree, or 0 if tree is NULL.
 **/

int binary_tree_max_height(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL || tree->right == NULL || tree->left == NULL)
		return (0);

	left_height = binary_tree_max_height(tree->left);
	right_height = binary_tree_max_height(tree->right);

	if (left_height > right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}
