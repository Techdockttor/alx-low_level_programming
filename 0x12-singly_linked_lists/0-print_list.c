#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: A pointer to the list_t list (start of the list).
 *
 * Return: The number of nodes in the list.
 */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		switch (h->str == NULL)
		{
			case 1:
				printf("[%d] %s\n", 0, "(nil)");
				break;
			case 0:
				printf("[%d] %s\n", h->len, h->str);
				break;
		}

		nodes++;
		h = h->next;
	}

	return (nodes);
}

