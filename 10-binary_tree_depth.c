#include "binary_trees.h"

/**
 * binary_tree_depth - gets depth of node in tree
 * @tree: Pointer to tree node
 * Return: node depth
 **/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t nd = 0;

	if (tree == NULL)
		return (0);

	while (tree->parent != NULL)
	{
		nd++;
		tree = tree->parent;
	}

	return (nd);
}
