#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if node is leaf
 * @node: pointer to node
 * Return: 1 is node is leaf, otherwise 0
 **/

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	/* if both sides are null then node is a leaf  */
	return (node->left == NULL && node->right == NULL);
}
