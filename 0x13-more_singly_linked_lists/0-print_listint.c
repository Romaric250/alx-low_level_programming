#include "lists.h"
#include<stdlib.h>
#include<stdio.h>

/**
 * print_listint - prints elements in a list
 *@h: list
 *
 *Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int count = 0;
      const listint_t *pt;

	if (h == NULL)

		printf("list is empty");
	pt = h;
	while (pt != NULL)
{
	printf("%d", pt->n);
	count++;
	pt = pt->next;
}
	return (count);
}
