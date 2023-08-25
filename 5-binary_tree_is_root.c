#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if node is root
 * @node: Pointer to node
 * Return: success if node, 0 if fail
 **/

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	/* if parent is NULL then node is root  */
	return (node->parent == NULL);
}
