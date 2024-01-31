#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: pointer to the root node of the tree to traverse
 * Return: pointer to the sibling node or NULL on failure
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *nullNode;

	nullNode = NULL;

	if (node == NULL || node->parent == NULL)
		return (nullNode);

	if (node->parent->right != node)
		return (node->parent->right);
	else if (node->parent->left != node)
		return (node->parent->left);
	return (nullNode);
}

