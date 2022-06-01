#include "main.h"

/**
 * times_table - Displays the multiplication table
 *
 */

void times_table(void)
{

	for (int i = 0; i <= 9; i++)
	{
		for (int j = 0; j <= 9; j++)
		{
			int product = i * j;

			if (product > 9)
			{
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');

				if (j == 9)
				{
					continue;
				}
			}
			else
			{
				_putchar(product + '0');

				if (j == 9)
				{
					continue;
				}
			}
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
