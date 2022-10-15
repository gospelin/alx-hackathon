#include "main.h"

void _puts(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_putchar(*s);
	_puts(s + 1);
}

/**
 * _puts_recursion - Write a function that prints a string, followed by a new line.
 *
 * @s - string
 */

void _puts_recursion(char *s)
{
	_puts(s);
	_putchar('\n')
}


