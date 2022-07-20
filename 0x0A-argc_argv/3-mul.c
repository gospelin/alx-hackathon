#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int count, length;
	unsigned int product = 1;

	for (count = 1, length = argc - 1; count < argc; count++)
	{
		if (length < 2 || length > 2)
		{
			printf("Error\n");
			return (1);
		}
		product *= atoi(*(argv + count));
	}
	printf("%d\n", product);
	return (0);
}