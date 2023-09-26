#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index -  inserts a new node at a given position.
 * @head: double pointer to the first head node in the list
 * @idx: index of listint_l where new node will insert
 * @n: value for new node
 *
 * Return: pointer to address the new node Else NULL if error
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int _node;
	listint_t *_currentt, *_neww;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		_currentt = *head;
		for (_node = 0; _node < idx - 1 && _currentt != NULL; _node++)
		{
			_currentt = _currentt->next;
		}
		if (_currentt == NULL)
			return (NULL);
	}
	_neww = malloc(sizeof(listint_t));
	if (_neww == NULL)
		return (NULL);
	_neww->n = n;
	if (idx == 0)
	{
		_neww->next = *head;
		*head = _neww;
		return (_neww);
	}
	_neww->next = _currentt->next;
	_currentt->next = _neww;
	return (_neww);
}
