#include "lists.h"

/**
 * is_palindrome - function that check if a list is palindrome.
 * @head: pointer to the header of the list.
 *
 * Return: 1 if is palindrome, 0 otherwise.
 */
int is_palindrome(listint_t **head)
{
	int i = 0, m, j;
	int number_list[50];
	listint_t *current = *head;

	if (head || (*head) )
	{
		while (current)
		{	/* getting the data of each node. */
			number_list[i] = current->n;
			current = current->next;
			i++;
		}

		m = i / 2, j = i - 1;

		for (i = 0; i < m; i++, j--)
		{
			printf("%d . %d\n", number_list[i], number_list[j]);
			if (number_list[i] != number_list[j])
				return (0);
		}
	}
	return (1);
}
