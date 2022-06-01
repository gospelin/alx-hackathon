#include "main.h"

/**
 *	print_last_digit - prints the last digit
 *
 * @n: The integer to print out the last digit from
 * Return: int
 */

int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;

	if (n < 0)
	{
		last_digit = -last_digit;
	}
	_putchar(last_digit + '0');
	return (last_digit);
}
