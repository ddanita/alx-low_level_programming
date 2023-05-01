#include "lists.h"

/**
 * delete_nodeint_at_index - it delete node in linked lists at certain index.
 * @head: points to the first element in linked lists.
 * @index: the index of the nodes to delete.
 * Return: will return 1 (Success) or -1 (Fail)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmmp = *head;
	listint_t *current = NULL;
	unsigned int m = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tmmp);
		return (1);
	}
	while (m < index - 1)
	{
		if (!tmmp || !(tmmp->next))
			return (-1);
		tmmp = tmmp->next;
		m++;
	}
	current = tmmp->next;
	tmmp->next = current->next;
	free(current);
	return (1);
}
