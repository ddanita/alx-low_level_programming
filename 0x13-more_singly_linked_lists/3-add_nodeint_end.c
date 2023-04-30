#include "lists.h"

/**
 * add_nodeint_end - will add nodes at the end of linked lists.
 * @head: points the first elements in lists.
 * @n: the data to insert into new elements.
 * Return: points to new nodes or if fail = NULL.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *tmmp = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (tmmp->next)
		tmmp = tmmp->next;
	tmmp->next = new;
	return (new);
}



