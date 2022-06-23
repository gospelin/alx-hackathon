#include "main.h"
/**
 * _strlen - gets the length of the string
 *
 * @s: string
 * Return: length of string
 */
int _strlen(char *s)
{
	int count = 0;

	for (; *s != '\0'; s++, count++)
		;

	return (count);
}

/**
 * puts_half - prints the other half of the string
 * 
 * @str: string
 */
void puts_half(char *str)
{
	int length, i, n;

	length = _strlen(str);

	n = length / 2;

	for (i = n; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
