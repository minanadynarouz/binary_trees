#include "binary_trees.h"

/**
 * binary_tree_height_Balance - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to traverse
 * Return: 0 if Null, otherwise return height - 1
 */

size_t binary_tree_height_Balance(const binary_tree_t *tree)
{
	size_t heightLeft, heightRight;

	if (tree == NULL)
		return (0);

	heightLeft = 0;
	heightRight = 0;
	heightLeft = tree->left ? 1 + binary_tree_height_Balance(tree->left) : 1;
	heightRight = tree->right ? 1 + binary_tree_height_Balance(tree->right) : 1;
	return (heightLeft > heightRight ? heightLeft : heightRight);
}

/**
 * binary_tree_balance - get diff between levels
 * @tree: pointer to the root node of the tree to traverse
 * Return: difference between levels
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_height_Balance(tree->left) -
			binary_tree_height_Balance(tree->right));
}
