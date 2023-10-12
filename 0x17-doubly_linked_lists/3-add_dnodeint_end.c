#include "lists.h"
/**
 * add_dnodeint_end - add a node at the end of the list.
 * @head: pointer to the first element in the list.
 * @n: value.
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *old;

	new = malloc(sizeof(dlistint_t));

	if (head == NULL || *head == NULL || new == NULL)
		return (NULL);

	old = *head;
	while (old->next != NULL)
		old = old->next;

	old->next = new;
	new->prev = old;
	new->next = NULL;
	new->n = n;

	return (new);
}
