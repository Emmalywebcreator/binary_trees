#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes.
 * @first: Pointer to the first node.
 * @second: Pointer to the second node.
 * Return: return NULL, else return common ancestor.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *momi, *popi;

	if (!first || !second)
		return (NULL);
	if (first == second)
		return ((binary_tree_t *)first);

	mom = first->parent, popi = second->parent;
	if (first == popi || !momi || (!momi->parent && popi))
		return (binary_trees_ancestor(first, popi));
	else if (mom == second || !popi || (!popi->parent && momi))
		return (binary_trees_ancestor(momi, second));
	return (binary_trees_ancestor(momi, popi));
}
