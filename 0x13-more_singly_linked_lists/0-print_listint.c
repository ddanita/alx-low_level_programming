#include "lists.h"

/**
 * print_listint - it prints all elements of the linked list
 * @m: the singly linked list type listint_t to print
 * Return: the number of the nodes
 */

size_t print_listint(const listint_t *m)
{
	size_t num = 0;

	while (m)
	{
		printf("%d\n", m->m);
		num++;
		m = m->next;
	}
	return (num);
}
