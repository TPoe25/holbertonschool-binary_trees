#include "binary_trees.h"

/**
 * binary_tree_inorder - traverses tree using in order traverse
 * @tree: Pointer to tree node
 * @func: Pointer to function to call node
 **/

void binary_tree_inorder(const binary_tree_t *tree, void(*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
