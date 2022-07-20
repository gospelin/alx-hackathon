#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of characters
 * @size: size of the array
 * @c: character
 *
 * Return: returns a pointer to array of char
 */

char *create_array(unsigned int size, char c)
{
	char *char_array;

	if(size == 0)
		return (NULL);

	char_array = malloc(size * sizeof(char));

	if(char_array == NULL)
		return (NULL);

	unsigned int i;

	for(i = 0; i < size; i++)
		*(char_array + i) = c;
	
	return (char_array);
}
