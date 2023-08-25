#include "binary_trees.h"

/**
 * binary_tree_size - gets sie of tree
 * @tree: Pointer to tree node
 * Return: size of tree
 **/

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	/* calculates size recursivly by adding 1 to each node  */
	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}
