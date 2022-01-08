#include "binary_trees.h"

heap_t *heap_insert(heap_t **root, int value)
{
	heap_t *node = NULL, *node_address;

	/*node = malloc(sizeof(heap_t));
	if (!node)
		return (NULL);
	node->n = value;
	node->parent = *root;
	node->left = NULL, node->right = NULL;*/
	node = binary_tree_node(*root, value);
	if (!root || !node)
		return NULL;
	if (!root || !(*root))
	{
		*root = node;
		return (*root);
	}

	position = node_position /* parent node */
	node_address = insert_node(root, node); /* as a leaf node */
	final_address = /* new location of the new node */ /* swap function*/

	return (final_address);
}

/*
index from 0		index from 1
i left = 2i + 1		i left = 2i
i right = 2i + 2	i right = 2i + 1
i parent = (i - 1)/ 2	i parent = i/2
i parent = (i - 2)/ 2 ??
*/
/**
 * insert_node - find the parent of the new node.
 * 
 */
heap_t *insert_node(heap_t **root, heap_t *node)
{
	heap_t *current = NULL;

	if (tree_perfect)
	{
		while (current->left)
			current = current->left;
		current->left = node;
		node->parent = current;
		return (current->left)

	}


}
/**
 * binary_tree_size - calculate the size of the tree.
 * @root: pointer to the root of the tree.
 *
 * Return: integer. size of the tree.
 **/
int binary_tree_size(heap_t *root)
{
	if (!root)
		return (0);
	return (1
		+ binary_tree_size(root->left)
		+ binary_tree_size(root->right)
		);
}