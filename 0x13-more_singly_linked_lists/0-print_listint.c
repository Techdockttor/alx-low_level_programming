#include "lists.h"
#include <stdio.h>

/**
 * print_listint -  prints all the elements of a listint_t list.
 * @h: pointer to begining(head) of list to print.
 * Return: number of (node)elements in the list.
 */

size_t print_listint(const listint_t *h)
{
	size_t sinode = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		sinode++;
	}
	return (sinode);
}
