#include "lists.h"

/** 
 * add_dnodeint - add a node at the beginning of the double linked list
 * @head: a pointer to the double linked list head.
 * @n: the value.
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *old;

	if (head == NULL || *head == NULL)
		return (NULL);

	old = *head;
	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = old;
	old->prev = new;

	*head = new;

	return (new);
}
