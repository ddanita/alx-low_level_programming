#include "lists.h"

/**
 * free_listint - will free linked lists.
 * @head: is the listint_t list to be freed.
 */

void free_listint(listint_t *head)
{
	listint_t *tmmp;

	while (head)
	{
		tmmp = head->next;
		free(head);
		head = tmmp;
	}
}
