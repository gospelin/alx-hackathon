#include "main.h"
/**
 * print_rev - prints string in reverse
 * 
 * @s: string 
 */
void print_rev(char *s)
{
	int length;
	length = _strlen(s);

	for (s = s + (length - 1); length >= 0; s--)
	{
		_putchar(*s);
		--length;
	}
	_putchar('\n');
}

/**
 * _strlen - prints the length of the string
 * @s: string pointer
 */
int _strlen(char *s)
{
	int count = 0;

	for (; *s != '\0'; s++, count++)
		;
	
	return (count);
}
