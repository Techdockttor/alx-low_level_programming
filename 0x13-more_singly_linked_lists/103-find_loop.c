#include "lists.h"

/**
 * find_listint_loop - Finds the loop contained in a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 * Return: If there is no loop - NULL.
 *         Otherwise - the address of the node where the loop starts.
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *monkey, *hare;

	monkey = hare = head;
	while (monkey && hare && hare->next)
	{
		monkey = monkey->next;
		hare = hare->next->next;
		if (monkey == hare)
		{
			monkey = head;
			break;
		}
	}
	if (!monkey || !hare || !hare->next)
		return (NULL);
	while (monkey != hare)
	{
		monkey = monkey->next;
		hare = hare->next;
	}
	return (hare);
}
