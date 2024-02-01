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

/**
 * binary_tree_level - perform a function on a specific level of a binary tree
 * @tree: pointer to the root of the tree
 * @level: level of the tree to perform a function on
 * @func: function to perform
 */

void binary_tree_level(const binary_tree_t *tree,
		size_t level, void (*func)(int))
{
	if (tree == NULL)
		return;
	if (level == 1)
		func(tree->n);
	else if (level > 1)
	{
		binary_tree_level(tree->left, level - 1, func);
		binary_tree_level(tree->right, level - 1, func);
	}
}

/**
 * binary_tree_levelorder - goes in binary tree using level-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node
 * Return: pointer to the lowest common ancestor node or NULL
 */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t h, i;

	if (tree == NULL || func == NULL)
		return;
	h = binary_tree_height(tree);
	for (i = 1; i <= h; i++)
		binary_tree_level(tree, i, func);
}
