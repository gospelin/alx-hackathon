#include <stdio.h>

/**
 * main - prints combination of two digits
 *
 * Return: returns 0
 */

int main(void)
{
	for (int i = 48; i <= 57; i++)
	{
		for (int j = i + 1; j <= 57; j++)
		{
			putchar(i);
			putchar(j);

			if (i != 56 || j != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
