#include "main.h"

/**
 * jack_bauer - prints the time
 * 
 */
void jack_bauer(void)
{
	for (int i = 0; i <= 2; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			for (int k = 0; k < 6; k++)
			{
				for (int l = 0; l <= 9; l++)
				{
					if (k == 5 && l > 9)
					{
						continue;
					}
					_putchar(i + '0');
					_putchar(j + '0');
					_putchar(':');
					_putchar(k + '0');
					_putchar(l + '0');
					_putchar('\n');
				}
			}
		}
	}
}
