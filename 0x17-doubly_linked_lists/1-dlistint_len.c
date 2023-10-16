#include "lists.h"

/**
 * dilstint_len - count the nodes in linked list
 * @h: double linked list head.
 *
 * Return: the number of nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
	unsigned int counter = 0;
	dlistint_t *list;

	if (h == NULL)
	{
		return (0);
	}
	list = h;

	while (list != NULL)
	{
		list = list->next;
		counter++;
	}

	return (counter);
}
