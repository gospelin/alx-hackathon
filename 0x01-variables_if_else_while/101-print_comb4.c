#include <stdio.h>

/**
 * main - prints all possible combinations of three digits
 *
 * Return: returns 0 (Success)
 */

int main(void)
{
	for (int i = 48; i <= 57; i++)
	{
		for (int j = i + 1; j <= 57; j++)
		{
			for (int k = j + 1; k <= 57; k++)
			{
				putchar(i);
				putchar(j);
				putchar(k);

				if (i != 55 || j != 56 || k != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
