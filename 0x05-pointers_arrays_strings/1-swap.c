#include "main.h"
/**
 * @swap_int - swaps two integers
 * 
 * @a: pointer to an integer
 * @b: pointer to an integer 
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
