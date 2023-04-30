#include "lists.h"

/**
 * free_listint2 - will free a linked list.
 * @head: points the listint_t lists to be freed.
 */

void free_listint2(listint_t **head)
{
	listint_t *tmmp;

	if (head == NULL)
		return;

	while (*head)
	{
		tmmp = (*head)->next;
		free(*head);
		*head = tmmp;
	}
	*head = NULL;
}
