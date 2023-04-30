#include "lists.h"

/**
 * pop_listint - it deletes head nodes of linked lists.
 * @head: it points to first elements in linked lists.
 * Return: all data in elements deleted or 0 if list is empty.
 */

int pop_listint(listint_t **head)
{
	listint_t *tmmp;
	int numm;

	if (!head || !*head)
		return (0);
	numm = (*head)->n;
	tmmp = (*head)->next;
	free(*head);
	*head = tmmp;
	return (numm);
}



