#include "binary_trees.h"

/**
 * binary_tree_preorder - a function that goes through a binary tree using
 * preorder traversal
 * @tree: the root of the binary tree
 * @func: a pointer to a function to call each node
 * Return: Void
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;
	if (func == NULL)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
