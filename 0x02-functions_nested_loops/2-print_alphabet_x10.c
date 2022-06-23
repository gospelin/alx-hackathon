#include "main.h"

/**
 * print_alphabet_x10 - prints the lowercase alphabets 10 times
 *
 */

void print_alphabet_x10(void)
{
	for (int i = 0; i <= 9; i++)
	{
		for (int j = 97; j <= 122; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
