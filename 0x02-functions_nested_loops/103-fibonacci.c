#include <stdio.h>

/**
 * main - prints sum of fibonacci series
 *
 * Each new term in the Fibonacci sequence is generated
 * by adding the previous two terms. By starting with 1 and 2,
 * the first 10 terms will be: 1, 2, 3, 5, 8, 13, 21, 34, 55, 89.
 * By considering the terms in the Fibonacci sequence
 * whose values do not exceed 4,000,000,
 * write a program that finds and prints the sum of the even-valued terms,
 * followed by a new line.
 * You are allowed to use the standard library
 *
 * Return: 0
 */

int main(void)
{
	long int a = 1, b = 2;
	long long fn_sum = 0, even_sum = 0;

	for (; fn_sum <= 4000000; )
	{
		fn_sum = a + b;
		a = b;
		b = fn_sum;

		if (a % 2 == 0)
		{
			even_sum += a;
		}
	}

	printf("%lld\n", even_sum);

}
