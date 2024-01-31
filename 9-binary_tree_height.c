#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to traverse
 * Return: 0 if Null, otherwise return height - 1
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t heightLeft, heightRight;

	if (tree == NULL)
		return (0);

	heightLeft = 0;
	heightRight = 0;
	heightLeft = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	heightRight = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (heightLeft > heightRight ? heightLeft : heightRight);
}
