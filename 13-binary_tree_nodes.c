#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: pointer to the root node of the tree to traverse
 * Return: size, or 0 if NULL
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree == NULL)
		return (0);

	size += (tree->left || tree->right) ? 1 : 0;
	size += binary_tree_nodes(tree->left);
	size += binary_tree_nodes(tree->right);
	return (size);
}
