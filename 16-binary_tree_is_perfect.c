#include "binary_trees.h"

/**
 * power - raise num to a power
 * @base: base number to be exponentiated
 * @expo: to the power of
 * Return: num to power of expo
 */

size_t power(size_t base, size_t expo)
{
	size_t result = 1;

	while (expo > 0)
	{
		result *= base;
		expo--;
	}
	return (result);
}

/**
 * binary_tree_height - Computes the height of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: height of the tree, or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return (1 + (left_height > right_height ? left_height : right_height));
}

/**
 * binary_tree_size - Computes the size (number of nodes) of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: size of the tree, or 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}

/**
 * binary_tree_is_perfect - Checks if tree is perfect or not.
 * @tree: pointer to the root node of the tree to traverse
 * Return: 1 if perfect, 0 if NULL or not perfect
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height, size;

	if (tree == NULL)
		return (0);

	height = binary_tree_height(tree);
	size = binary_tree_size(tree);

	return (size == power(2, height) - 1);
}
