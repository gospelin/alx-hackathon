#include <stdio.h>

/**
 *	main - prints base 16 numbers
 *
 *	Return: returns 0
 */

int main(void)
{
	for (int i = 0x30; i <= 0x39; i++)
	{
		putchar(i);
	}
	for (int i = 0x61; i <= 0x66; i++)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
