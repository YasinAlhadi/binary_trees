#include "binary_trees.h"

/**
 * @node: pointer to the node to check
 *
 * Return: 1 if node is a leaf, otherwise 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}

/**
 * binary_tree_leaves - counts the leaves in a binary tree.
 * @tree: pointer to the root node of the tree to count the number of leaves
 *
 * Return: 0 If tree is NULL.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left = 0;
	size_t right = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (binary_tree_is_leaf(tree))
	{
		return (1);
	}
	left = binary_tree_leaves(tree->left);
	right = binary_tree_leaves(tree->right);
	return (left + right);
}
