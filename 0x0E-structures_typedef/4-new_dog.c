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
	char *cp_name, *cp_owner;
	int ln_name = 0, ln_owner = 0, i;

	if (name == NULL || owner == NULL)
		return (NULL);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	while (name[ln_name])
		ln_name++;
	while (owner[ln_owner])
		ln_owner++;
	cp_name = malloc(ln_name + 1);
	if (cp_name == NULL)
	{
		free(dog);
		return (NULL);
	}
	cp_owner = malloc(ln_owner + 1);
	if (cp_owner == NULL)
	{
		free(dog);
		free(cp_name);
		return (NULL);
	}
	for (i = 0; i < ln_name; i++)
		cp_name[i] = name[i];
	cp_name[i] = '\0';
	for (i = 0; i < ln_owner; i++)
		cp_owner[i] = owner[i];
	cp_owner[i] = '\0';
	dog->name = cp_name;
	dog->age = age;
	dog->owner = cp_owner;
	return (dog);
}
