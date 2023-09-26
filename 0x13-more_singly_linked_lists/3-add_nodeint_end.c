#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: double pointer to the head of the list
 * @n: integer to add to the list
 * Return: address to the new node else NULL if error
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *_new_node, *_end;

	_new_node = malloc(sizeof(listint_t));
	if (_new_node == NULL)
		return (NULL);

	_new_node->n = n;
	_new_node->next = NULL;

	if (*head == NULL)
		*head = _new_node;

	else
	{
		_end = *head;
		while (_end->next != NULL)
			_end = _end->next;
		_end->next = _new_node;
	}

	return (*head);
}
