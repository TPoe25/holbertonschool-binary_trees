#include "binary_trees.h"

/**
 * binary_tree_postorder - traverses tree with post order traverse
 * @tree: Pointer to tree node
 * @func: Pointer to func to call node
 **/

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
