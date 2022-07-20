#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers.
 * The array created should contain all the values from min (included) to max (included), ordered from min to max
 * If min > max, return NULL
 * If malloc fails, return NULL
 *
 * @min:
 * @max:
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *array;
	int index, count;

	array = malloc(sizeof(*array) * ((max - min) + 1));

	if(array == NULL)
	{
		return (NULL);
	}

	if (min > max)
	{
		return (NULL);
	}

	for(index = 0; min <= max; index++, min++)
	{
		*(array + index) = min;
	}

	return (array);
}
