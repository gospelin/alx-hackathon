#include "main.h"

/**
 * times_table - prints out times table
 *
 */
void times_table(void)
{
	int i, j, n = 9;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			int product = i * j;

			if (product > 9)
			{
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');

				if (j != n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				_putchar(product + '0');

				if (j != n)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');

	}

}
