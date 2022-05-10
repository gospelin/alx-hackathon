#include "main.h"

/**
 *	_isalpha - checks for alphabetic character
 *
 *	@c: holds the character in ASCII
 *	Return: returns 1 (Success), 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
