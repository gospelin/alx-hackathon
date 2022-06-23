#include "main.h"
/**
 * reverse_array - reverses the content of the array of integers
 * 
 * @a: array
 * @n: number of elements in the array 
 */
void reverse_array(int *a, int n)
{
	int *start, *end, temp, i;

	start = a;
	end = a;

	for (i = 0; i < n - 1; i++, end++)
		;

	for (i = 0; i < n / 2; i++, start++, end--)
	{
		temp = *start;
		*start = *end;
		*end = temp;
	}
}
