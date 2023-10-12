#include "lists.h"
/**
 * get_dnodeint_at_index - get the node at specific index starting from 0.
 * @head: list's head.
 * @index: node's index.
 *
 * Return: returns the nth node of the list. NULL if the node doesn't exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int counter = 0;
	dlistint_t *list;

	if (head == NULL)
		return (NULL);

	list = head;
	while (list != NULL)
	{
		if (counter == index)
			return (list);

		list = list->next;
		counter++;
	}

	return (NULL);
}
