#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to the root node of the tree to traverse
 * Return: pointer to the uncle node or NULL on failure
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *nullNode;

	nullNode = NULL;

	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (nullNode);

	if (node->parent->parent->right == node->parent)
		return (node->parent->parent->left);
	else if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);

	return (nullNode);
}
