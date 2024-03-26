#include "binary_trees.h"

/**
 * binary_tree_delete - deletes an entire binary tree
 * @tree: pointer to the root node of the tree to delete
 *
 * Description: The function recursively traverses the tree in post-order
 * and deletes each node along the way.
 **/

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	free(tree);
}
