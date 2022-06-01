#include "main.h"

/**
 *	print_sign - prints the sign of a numbers
 *
 *	Return: returns 1 and prints +, if positive,
 *	-1 and prints -, if negative
 *	0 and prints 0, if zero.
 *	@n: argument to hold the digit
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('0');
	return (0);
}
