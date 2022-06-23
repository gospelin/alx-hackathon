#include "main.h"
/**
 * print_line - prints line
 *
 * @n: number of times line is printed
 * You can only use _putchar function to print
 * Where n is the number of times the character _ should be printed
 * The line should end with a \n
 * If n is 0 or less, the function should only print \n
 */
void print_line(int n)
{
	for (int i = 1; i <= n; i++)
	{
		if (n <= 0)
		{
			_putchar('\n');
			break;
		}
		_putchar('_');
	}
	_putchar('\n');
}
