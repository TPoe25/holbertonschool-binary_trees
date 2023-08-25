#include "binary_trees.h"

/**
 * binary_tree_insert_left - Puts a node as left child of another node
 * @parent: Pointer to parent noder to put left child in
 * @value: Value to store new node
 * Return: pointer to node, or NULL on fail
 **/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	if (parent == NULL)
		return (NULL);
	newnode = binary_tree_node(parent, value);
	if (newnode == NULL)
		return (NULL);
	if (parent->left != NULL)
	{
		newnode->left = parent->left;
		parent->left->parent = newnode;
	}
	parent->left = newnode;

	return (newnode);
}
