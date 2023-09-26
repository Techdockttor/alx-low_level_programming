#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: a double pointer to the beginning of a listint_t list
 * @n: integer to add in the new node
 * Return: address of new node or
 *         NULL if error
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *_new_node;

	if (head == NULL)
		return (NULL);
	_new_node = malloc(sizeof(listint_t));
	if (_new_node == NULL)
		return (NULL);
	_new_node->n = n;
	_new_node->next = *head;
	*head = _new_node;
	return (_new_node);
}
