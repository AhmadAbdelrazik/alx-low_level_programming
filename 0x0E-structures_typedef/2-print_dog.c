#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - print the content of the struct dog.
 * @d: the struct dog.
 *
 * Return: void.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";
	if (&(d->age) == NULL)
		printf("Name: %s\nAge: (nil)\nOwner: %s\n", d->name, d->owner);
	else
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
