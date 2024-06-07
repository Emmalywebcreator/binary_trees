#include "binary_trees.h"

/**
 * bst_insert - Inserts a value in a Binary Search Tree.
 * @tree: A double pointer to the root node of the BST to insert the value.
 * @value: The value to store in the node to be inserted.
 *
 * Return: A pointer to the created node, or NULL on failure.
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *currt, *new;

	if (tree != NULL)
	{
		currt = *tree;

		if (currt == NULL)
		{
			new = binary_tree_node(currt, value);
			if (new == NULL)
				return (NULL);
			return (*tree = new);
		}

		if (value < currt->n)
		{
			if (currt->left != NULL)
				return (bst_insert(&curr->left, value));

			new = binary_tree_node(currt, value);
			if (new == NULL)
				return (NULL);
			return (currt->left = new);
		}
		if (value > currt->n)
		{
			if (currt->right != NULL)
				return (bst_insert(&currt->right, value));

			new = binary_tree_node(currt, value);
			if (new == NULL)
				return (NULL);
			return (currt->right = new);
		}
	}
	return (NULL);
}
