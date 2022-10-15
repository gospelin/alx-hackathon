#include <stdio.h>
#include "function_pointers.h"

int int_index(int *array, int size, int (*cmp)(int))
{
	if (size <= 0)
	{
		return (-1);
	}

	int index, num;

	for(index = 0; index < size; index++)
	{
		if (cmp(*(array++)))
		{
			return (index);
		}
	}
	return (-1);
}
