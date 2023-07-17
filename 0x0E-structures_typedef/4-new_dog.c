#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - a function that creates a new dog.
 * @name: dog's name.
 * @age: dog's age.
 * @owner: dog's owner.
 *
 * Return: returns a dog_t with the given inputs. return NULL at failure.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	char *cname, *cowner;
	int len_name = 0, len_owner = 0, i = 0;

	/* Early Terminate Conditions */
	if (name == NULL || owner == NULL)
		return (NULL);

	dog = imalloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	/* Length of name and owner */
	for (; name[len_name] != '\0'; len_name++)
	;
	for (; owner[len_owner] != '\0'; len_owner++)
	;

	/* Allocating memory for cname and cowner */
	cname = malloc(len_name + 1);
	if (cname == NULL)
		return (NULL);

	cowner = malloc(len_owner + 1);
	if (cowner == NULL)
		return (NULL);

	/* Copying the strings. */
	for (i = 0; i < len_name; i++)
		cname[i] = name[i];
	cname[i] = '\0';

	for (i = 0; i < len_owner; i++)
		cowner[i] = owner[i];
	cowner[i] = '\0';

	/* completing the structure*/
	dog->name = name;
	dog->age = age;
	dog->owner = owner;
	
	return (dog);
}
