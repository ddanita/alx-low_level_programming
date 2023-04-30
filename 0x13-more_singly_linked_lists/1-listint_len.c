#include "lists.h"

/**
 * listint_len - it returns number of elements in linked lists
 * @h: the linked list type listint_t to traverse
 * Return: the number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t numm = 0;

	while (h)
	{
		numm++;
		h = h->next;
	}
	return (numm);
}
