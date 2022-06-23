#include "main.h"
#include <stdio.h>
/**
 * print_array - prints elements in the array
 *
 * @a: array
 * @n: number of elements of the array to be printed
 */
void print_array(int *a, int n)
{
	/* Using indexes */
	int i;
	
	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
		{
			printf("%d\n", a[i]);
			break;
		}

		printf("%d, ", a[i]);
	}

	/* Using pointer */

	for (i = 0; i < n; i++, a++)
	{
		if (i == (n - 1))
		{
			printf("%d\n", *a);
			break;
		}
		printf("%d, ", *a);
	}
}
