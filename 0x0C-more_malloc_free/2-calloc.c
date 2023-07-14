#include "main.h"
/**
 * _calloc - function allocates memory for an array of nmemb elements
 * of size bytes each and returns a pointer to the allocated memory.
 * @nmemb: number of elements in array.
 * @size: number of bytes for each element.
 *
 * Return: return pointer to the newly allocated memory
 * at failure return null, if nmemb or size is equal to 0 return NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	/* Check for 0 values in nmemb and size*/
	if (nmemb == 0 ||  size == 0)
		return (NULL);
	/* allocating memory for the array of pointers*/
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	/*allocating memory for the pointers of the array*/
	for (i = 0; i < nmemb * size; i++)
	{
		ptr[i] = 0;
	}
	/* Return the pointer */
	return (ptr);
}
