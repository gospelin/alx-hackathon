#include "main.h"
/**
 * more_numbers - prints 1 - 14
 * 
 */
void more_numbers(void)
{
	for (int i = 0; i <= 14; i++)
	{
		if (i > 9)
		{
			_putchar((i / 10) + '0');
		}
		_putchar((i % 10) + '0');
	}
	_putchar('\n');
}
