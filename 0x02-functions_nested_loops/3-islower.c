#include "main.h"
#include <ctype.h>
#include <stdlib.h>

/**
 *	_islower - checks for lowercase characters
 *
 * @c: Holds the character in ASCII code
 *
 *	Return: returns 1 (Success), 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
