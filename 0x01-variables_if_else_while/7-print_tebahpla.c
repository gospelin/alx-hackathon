#include <stdio.h>

/**
 *	main - prints alphabets in reverse
 *
 *	Return: returns 0
 */

int main(void)
{
	int i = 122;

	while (i >= 97)
	{
		putchar(i);
		i--;
	}
	putchar('\n');

	return (0);
}
