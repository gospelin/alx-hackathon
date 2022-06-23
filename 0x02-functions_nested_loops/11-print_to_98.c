#include "main.h"
#include <stdio.h>

/**
 * descending_98 - prints the descending format of print_to_98()
 *
 * @n: integer value
 */

void descending_98(int n)
{
	for (int i = n; i >= 98; i--)
	{
		printf("%d, ", i);
	}
}

/**
 * ascending_98 - prints the ascending format of print_to_98()
 *
 * @n: integer value
 */

void ascending_98(int n)
{
	for (int i = n; i <= 98; i++)
	{
		printf("%d, ", i);
	}
}

/**
 * print_to_98 - prints a either ascending or descending till 98
 *
 * @n: hold the starting point number
 * Prototype: void print_to_98(int n);
 * Numbers must be separated by a comma, followed by a space
 * Numbers should be printed in order
 * The first printed number should be the number passed to your function
 * The last printed number should be 98
 * You are allowed to use the standard library
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		descending_98(n);
		printf("\n");
	}
	else if (n == 98)
	{
		printf("%d\n", n);
	}
	else
	{
		ascending_98(n);
		printf("\n");
	}
}
