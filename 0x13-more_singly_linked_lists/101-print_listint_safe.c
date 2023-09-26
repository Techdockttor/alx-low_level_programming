#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _r - reallocates memory for an array of pointers
 *      to the nodes in a linked list
 * @list: the old list to append
 * @size: size of the new list (always one more than the old list)
 * @new: new node to add to the list
 * Return: pointer to the new list
 */
const listint_t **_r(const listint_t **list, size_t size, const listint_t *new)
{
	const listint_t **_newlistt;
	size_t z;

	_newlistt = malloc(size * sizeof(listint_t *));
	if (_newlistt == NULL)
	{
		free(list);
		exit(98);
	}
	for (z = 0; z < size - 1; z++)
		_newlistt[z] = list[z];
	_newlistt[z] = new;
	free(list);
	return (_newlistt);
}

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: pointer to the start head of the list
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t z, _numm = 0;
	const listint_t **list = NULL;

	while (head != NULL)
	{
		for (z = 0; z < _numm; z++)
		{
			if (head == list[z])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(list);
				return (_numm);
			}
		}
		_numm++;
		list = _r(list, _numm, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(list);
	return (_numm);
}
