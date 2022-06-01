#include "main.h"

/**
 * _abs - computes the absolute value
 *
 * @n: integer value
 * Return: return the absolute value
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	return (n);
}
