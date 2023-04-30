#include "lists.h"

/**
 * add_nodeint - will add a knew node at the beginning of linked lists.
 * @head: points to first nodes in the lists.
 * @n: the data to insert in the knew node
 * Return: the pointer to knew node or to NULL if it fail.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *knew;

	knew = malloc(sizeof(listint_t));
	if (!knew)
		return (NULL);

	knew->n = n;
	knew->next = *head;
	*head = knew;

	return (knew);
}
