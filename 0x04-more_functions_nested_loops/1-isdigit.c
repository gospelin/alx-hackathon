#include "main.h"

/**
 * _isdigit - checks if the character is digit
 *
 * @c: character
 * Return: Returns 1 if c is a digit
 * Returns 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}