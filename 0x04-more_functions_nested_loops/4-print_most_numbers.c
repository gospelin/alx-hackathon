#include "main.h"
/**
 * print_most_numbers - prints numbers except 2 and 4
 *
 */
void print_most_numbers(void)
{
	for (int i = 0; i <= 9; i++)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}
		_putchar(i + '0');
	}
	_putchar('\n');
}
