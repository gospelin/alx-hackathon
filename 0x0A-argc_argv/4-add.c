#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - add arguments from terminal
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	int count, length, sum = 0;
	for (count = 1, length = argc - 1; count < argc; count++)
	{
		if (length == 0)
		{
			printf("%d\n", 0);
		}
		else if(atoi(*(argv + count)) == 0)
		{
			printf("Error\n");
			return (1);
		}
		else 
		{
			sum += atoi(*(argv + count));
		}
	}
	printf("%d\n", sum);
	return (0);
}
