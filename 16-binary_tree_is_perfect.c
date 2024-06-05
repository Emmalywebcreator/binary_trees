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
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: 1 if the tree is perfect, 0 otherwise.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	size_t left_height = binary_tree_height(tree->left);
	size_t right_height = binary_tree_height(tree->right);

	if (left_height != right_height)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	if (tree->left != NULL && tree->right != NULL)
	{
		return binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right);
	}

	return (0);
}
