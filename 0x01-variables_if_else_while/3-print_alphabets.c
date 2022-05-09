#include <stdio.h>

/**
 *	main - prints upper and lower case letters
 *
 *	Return: returns 0
 */

int main(void)
{
	for (int i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	for (int i = 65; i <= 90; i++)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
