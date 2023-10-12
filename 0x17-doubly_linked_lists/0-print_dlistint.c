#include "lists.h"

/**
 * print_dilstint - print all elements in a double linked list
 * @h: double linked list head.
 * 
 * Return: the number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
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
		printf("%d", list->n);
		list = list->next;
		counter++;
	}
	
	return (counter);
}
