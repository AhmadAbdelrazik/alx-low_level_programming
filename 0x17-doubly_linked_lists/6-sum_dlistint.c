#include "lists.h"
/**
 * sum_dlistint - sum all the values 
 * @head: the head of the list
 *
 * Return: The sum of all values. 0 if empty.
 */
int sum_dlistint(dlistint_t *head)
{
	int counter = 0;
	dlistint_t *list;

	if (head == NULL)
		return (0);

	list = head;

	while (list != NULL)
	{
		counter += list->n;
		list = list->next;
	}

	return (counter);
}
