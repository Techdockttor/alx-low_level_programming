#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _ra - reallocates memory for an array of pointers
 * to the nodes in a linked list
 * @list: the old list to append
 * @size: size of the new list (always one more than the old list)
 * @new: new node to add to the list
 * Return: pointer to the new list
 */
listint_t **_ra(listint_t **list, size_t size, listint_t *new)
{
	listint_t **_newlistt;
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
 * free_listint_safe - frees a listint_t linked list safely(free loops)
 * @head: double pointer to the start head address of the list
 * Return: the number of nodes in the list
 */
size_t free_listint_safe(listint_t **head)
{
	size_t z, num = 0;
	listint_t **list = NULL;
	listint_t *next;

	if (head == NULL || *head == NULL)
		return (num);
	while (*head != NULL)
	{
		for (z = 0; z < num; z++)
		{
			if (*head == list[z])
			{
				*head = NULL;
				free(list);
				return (num);
			}
		}
		num++;
		list = _ra(list, num, *head);
		next = (*head)->next;
		free(*head);
		*head = next;
	}
	free(list);
	return (num);
}
