#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - Add a new node in the beginning of a list.
 * @head: Address first node o.
 * @n: Integer.
 * Return: Address of new node.
 **/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *pt;

	pt = malloc(sizeof(listint_t));
	if (pt == NULL)
		return (NULL);

	pt->n = n;
	pt->next = *head;
	*head = pt;
	return (*head);
}
