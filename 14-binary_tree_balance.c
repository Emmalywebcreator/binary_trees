#include "binary_trees.h"
#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: If tree is NULL, your function must return 0, else return height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left)
	{
		left_height = 1 + binary_tree_height(tree->left);
	}
	else
	{
		left_height = 0;
	}

	if (tree->right)
	{
		right_height = 1 + binary_tree_height(tree->right);
	}
	else
	{
		right_height = 0;
	}

	return ((left_height > right_height) ? left_height : right_height);
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the balance factor.
 *
 * Return: If tree is NULL, return 0, else return the balance factor.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height = 0;
	int right_height = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left != NULL)
	{
		left_height = (int)binary_tree_height(tree->left) + 1;
	}
	else
	{
		left_height = 0;
	}

	if (tree->right != NULL)
	{
		right_height = (int)binary_tree_height(tree->right) + 1;
	}
	else
	{
		right_height = 0;
	}

	return (left_height - right_height);
}
