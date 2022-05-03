#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints the last digit of a random number
 *
 * Return: returns 0
 */
int main(void)
{
	int n;
	int last_num;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	last_num = n % 10;

	if (last_num > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last_num);
	} else if (last_num == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last_num);
	} else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_num);
	}

	return (0);
}
