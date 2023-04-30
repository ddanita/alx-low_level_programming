#include "lists.h"


/**
 * sum_listint - this calculates the sum of every data in a listint_t list
 * @head: the first node in the linked lists.
 * Return: the resulting sum
 */

int sum_listint(listint_t *head)

{
	int summ = 0;
	listint_t *tmmp = head;

	while (tmmp)
	{
		summ += tmmp->n;
		tmmp = tmmp->next;
	}
	return (summ);
}
