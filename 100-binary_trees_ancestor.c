#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: is a pointer to the first node
 * @second: is a pointer to the second node
 * Return: pointer to the lowest common ancestor node or NULL
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	const binary_tree_t *p1, *p2;

	if (first == NULL || second == NULL)
		return (NULL);

	if (first == second)
		return ((binary_tree_t *)first);

	p1 = first;
	p2 = second;

	while (p1 != p2)
	{
		p1 = (p1->parent != NULL) ? p1->parent : second;
		p2 = (p2->parent != NULL) ? p2->parent : first;
	}
	return ((binary_tree_t *)p1);
}
