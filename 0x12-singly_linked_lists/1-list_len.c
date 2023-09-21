#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - Counts the number of nodes in a linked list.
 * @h: Pointer to the head of the linked list.
 *
 * Return: The number of nodes in the list.
 */
size_t list_len(const list_t *h)
{
	int nodes = 0;

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}

