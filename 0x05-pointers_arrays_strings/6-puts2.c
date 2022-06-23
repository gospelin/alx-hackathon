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
 * puts2 - prints the even string
 *
 * @str: character string
 */
void puts2(char *str)
{
	int length, i;

	length = _strlen(str);

	
	for (i = 0; i < length; i++, str++)
	{
		if(i % 2 == 0)
		{
			_putchar(*str);
		}
		
	}
	/*
		for (i = 0; i < length; i += 2)
		{
			_putchar(str[i]);
		}
	*/
	_putchar('\n');
}
