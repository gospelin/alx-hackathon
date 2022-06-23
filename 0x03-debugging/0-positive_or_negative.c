#include <stdio.h>

/**
 * main - Determines a randomly generated number
 * positive, negative or zero
 *
 * Return: returns 0
 */
void positive_or_negative(int i)
{
	if (i < 0)
	{
		printf("%d is negative\n", i);
	} else if (i > 0)
	{
		printf("%d is positive\n", i);
	} else
	{
		printf("%d is zero\n", i);
	}
}
