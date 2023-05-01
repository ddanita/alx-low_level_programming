#include "lists.h"

/**
 * insert_nodeint_at_index - puts new node in linked lists in given positions.
 * @head: a pointer to the first node in the linked list
 * @idx: the index where the new node is added.
 * @n: the  data to insert in the new node.
 * Return: points to the new node or presents NULL.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int m;
	listint_t *knew;
	listint_t *tmmp = *head;

	knew = malloc(sizeof(listint_t));
	if (!knew || !head)
		return (NULL);

	knew->n = n;
	knew->next = NULL;

	if (idx == 0)
	{
		knew->next = *head;
		*head = knew;
		return (knew);
	}
	for (m = 0; tmmp && m < idx; m++)
	{
		if (m == idx - 1)
		{
			knew->next = tmmp->next;
			tmmp->next = knew;
			return (knew);
		}
		else
			tmmp = tmmp->next;
	}
	return (NULL);
}


