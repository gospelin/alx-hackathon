#include "main.h"

//int sub_divide(int n)
//{
//	if (n > 9)
//	{
//		int s = n / 10;
//		_putchar((s / 10) + '0');
//		_putchar((s % 10) + '0');
//	}

//	//sub_divide(n / 10);
//	//return (n);
//}

/**
 * print_times_table - prints time table
 * 
 * @n: integer value
 */
void print_times_table(int n)
{
	if (n < 0 || n > 15)
	{
		return;
	}

	for(int i = 0; i <= n; i++)
	{
		int product;
		
		for (int j = 0; j <= n; j++)
		{
			product = i * j;

			if (product > 99)
			{
				int s = product / 10;
				
				_putchar((s / 10) + '0');
				_putchar((s % 10) + '0');
				_putchar((product % 10) + '0');

				if (j != n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else if (product > 9 && product <= 99)
			{
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');

				if (j != n)
				{
					_putchar(',');
					_putchar(' ');
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
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
