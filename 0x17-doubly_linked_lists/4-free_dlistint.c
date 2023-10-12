#include "lists.h"

/**
 * free_dlistint - free a list.
 * @head: head
 *
 * Return: void.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *holder;


	if (head == NULL)
		return;

	while (head != NULL)
	{
		holder = head;
		head = head->next;
		free(holder);
	}
}
