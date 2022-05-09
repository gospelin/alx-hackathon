#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 *
 * Return: returns 0 (Success)
 */

int main(void)
{
	for (int c = 48; c <= 57; c++)
	{
		for (int i = 48; i <= 57; i++)
		{
			for (int j = 48; j <= 57; j++)
			{
				for (int k = j; k <= j; k++)
				{
					putchar(c);
					putchar(i);
					putchar(' ');
					putchar(j);
					putchar(k);
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
}
