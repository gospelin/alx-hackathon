#include "main.h"
/**
 * print_diagonal - prints diagonal "\"
 * 
 * @n: number of times to print "\"
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}

	for (i = 1; i <= n; i++)
	{

		for (j = 0; j <= i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		
		_putchar('\n');
	}
}
