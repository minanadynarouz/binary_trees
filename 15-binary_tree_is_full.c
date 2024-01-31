#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if tree is full or not.
 * @tree: pointer to the root node of the tree to traverse
 * Return: 1 if full or 0 if NULL
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (1);

	if ((tree->left == NULL && tree->right != NULL) ||
			(tree->left != NULL && tree->right == NULL))
		return (0);

	return (((binary_tree_is_full(tree->left) &&
					binary_tree_is_full(tree->right)) ||
				(!binary_tree_is_full(tree->left) &&
				 !binary_tree_is_full(tree->right))) ? 1 : 0);
}
