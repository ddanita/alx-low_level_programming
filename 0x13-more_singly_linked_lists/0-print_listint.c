#include "lists.h"

/**
 * print_listint - it prints all elements of the linked list
 * @h: the singly linked list type listint_t to print
 * Return: the number of the nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t numm = 0;

	while (h)
	{
		printf("%d\n", h->n);
		numm++;
		h = h->next;
	}
	return (numm);
}
