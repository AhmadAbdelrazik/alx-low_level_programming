#include "lists.h"

static void populate_node(dlistint_t *node, dlistint_t *next
			, dlistint_t *prev, int n);
/**
 * insert_dnodeint_at_index - insert a node at a specific index.
 * @h: pointer to double linked list head.
 * @idx: the index of the new node.
 * @n: the value.
 *
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *list;
	unsigned int counter = 0;

	new = malloc(sizeof(dlistint_t));

	if (h == NULL || new == NULL)
		return (NULL);

	if (*h == NULL)
	{
		*h = new;
		populate_node(new, NULL, NULL, n);
		return (new);
	}

	list = *h;

	while (list->next != NULL)
	{
		if (counter == idx)
		{
			populate_node(new, list, list->prev, n);
			populate_node(list, list->n, new, list->n);
			return (new);
		}
		counter++;
		list = list->next;
	}
	counter++;
	if (counter == idx)
	{
		populate_node(new, NULL, list, n);
		list->next = new;
	}
	return (NULL);
}

/**
 * populate_node - populates the node.
 * @node: the node.
 * @next: the next node.
 * @prev: the previous node.
 * @n: the node's value.
 *
 * Return: Void.
 */

static void populate_node(dlistint_t *node, dlistint_t *next
			, dlistint_t *prev, int n)
{
	node->next = next;
	node->prev = prev;
	node->n = n;
}


