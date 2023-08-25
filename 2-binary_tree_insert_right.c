#include "binary_trees.h"

/**
 * binary_tree_insert_right - Puts node as right child of another node
 * @parent: Pointer to parent node
 * @value: Value to put in new node
 * Return: Pointer to node made, or NULL on fail
 **/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	if (parent == NULL)
		return (NULL);
	newnode = binary_tree_node(parent, value);
	if (newnode == NULL)
		return (NULL);
	if (parent->right != NULL)
	{
		newnode->right = parent->right;
		parent->right->parent = newnode;
	}
	parent->right = newnode;

	return (newnode);
}
