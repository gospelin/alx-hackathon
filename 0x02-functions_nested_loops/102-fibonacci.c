#include <stdio.h>

/**
 * main - prints fibonacci series
 *
 * Write a program that prints the first 50 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 * The numbers must be separated by comma, followed by a space,
 * You are allowed to use the standard library
 *
 * Return: 0
 */
int main(void)
{
	int i;
	long int a, b, fn_sum;

	a = 1;
	b = 2;

	for (i = 1; i < 50; i++)
	{
		if (i == 49)
		{
			printf("%ld ", a);
			break;
		}

		printf("%ld, ", a);

		fn_sum = a + b;
		a = b;
		b = fn_sum;
	}
	printf("\n");

	return (0);
}
