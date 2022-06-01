#include "main.h"

/**
 * times_table - Displays the multiplication table
 *
 */

void times_table(void)
{

	int i, j, product;

	for (i = 0; i <= 9; i++)
	{
		putchar('0');

		for (j = 1; j <= 9; j++)
		{

			product = i * j;

			putchar(',');
			putchar(' ');

			if (product <= 9)
			{
				putchar(' ');
				putchar(product + '0');
			}
			else
			{
				putchar((product / 10) + '0');
				putchar((product % 10) + '0');
			}
		}
		putchar('\n');
	}
}
