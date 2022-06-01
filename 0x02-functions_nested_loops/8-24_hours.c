#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 *
 */

void jack_bauer(void)
{
	for (int c = 48; c <= 48 + 2; c++)
	{
		for (int i = 48; i <= 48 + 9; i++)
		{
			for (int j = 48; j <= 48 + 5; j++)
			{
				for (int k = 48; k <= 57; k++)
				{
					if ((c >= 48 + 2) && (i >= 48 + 4))
						break;

					_putchar(c);
					_putchar(i);
					_putchar(':');
					_putchar(j);
					_putchar(k);
					_putchar('\n');
				}
			}
		}
	}
}
