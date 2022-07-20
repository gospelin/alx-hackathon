#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array
 * The _calloc function allocates memory for an array of nmemb elements of size bytes each
 * and returns a pointer to the allocated memory.
 * The memory is set to zero
 * If nmemb or size is 0, then _calloc returns NULL
 * If malloc fails, then _calloc returns NULL
 *
 * @nmemb:
 * @size:
 * Return: A pointer to void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	int index;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	array = malloc(nmemb * size);

	if (array == NULL)
	{
		return (NULL);
	}

	for(index = 0; index < (nmemb * size); index++)
	{
		*(array + index) = 0;
	}

	return (array);
}
