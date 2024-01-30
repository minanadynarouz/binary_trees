#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: is parent node
 * @value: value of node to be created
 * Return: pointer to the new node, or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (!parent)
		return (NULL);

	newNode = malloc(sizeof(binary_tree_t));
	if (!newNode)
		return (NULL);

	newNode->parent = NULL;
	newNode->n = value;
	newNode->left = newNode->right = NULL;
	return (newNode);
}
