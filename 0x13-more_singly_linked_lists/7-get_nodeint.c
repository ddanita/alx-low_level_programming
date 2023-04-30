#include "lists.h"

/**
 * get_nodeint_at_index - will return node at certain index in linked list
 * @head: the first node in the linked list.
 * @index: the index of the nodes to return.
 * Return: it points the node we're looking for or NULL.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int m = 0;
	listint_t *tmmp = head;

	while (tmmp && m < index)
	{
		tmmp = tmmp->next;
		m++;
	}
	return (tmmp ? tmmp : NULL);
}
