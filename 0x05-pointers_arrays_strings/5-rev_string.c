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
 * rev_string - reverses string
 * 
 * @s: string
 * This holds a pointer to the beginning of string
 * and holds the pointer to the end of the string
 * then exchanges them till the (length / 2)
 */
void rev_string(char *s)
{
	int length, i;
	char *start, *end, temp;

	length = _strlen(s);
	start = s;
	end = s;

	for (i = 0; i < (length - 1); i++, end++)
		;

	for (i = 0; i < (length/2); i++, start++, end--)
	{
		temp = *start;
		*start = *end;
		*end = temp;
	}
}
