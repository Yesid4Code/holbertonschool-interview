#include "lists.h"
#include <stdlib.h>

/**
 * insert_node - insert a node in a list.
 * @head: pointer to the head of the list.
 * @number: integer to insert.
 *
 * Return: address of the new node.
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *ptr, *node;

	if (!head)
		return (NULL);

	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);

	node->n = number;
	node->next = (NULL);

	ptr = *head;
	while (ptr->next)
	{
		if (ptr->next->n >= number)
		{
			node->next = ptr->next;
			ptr->next = node;
			return (ptr);
		}
		ptr = ptr->next;
	}
	ptr->next = node;
	return (node);
}
