#include "main.h"
int _strlen(char *s, int count)
{
	if (*s == '\0')
	{
		return count;
	}
	_strlen(s + 1, ++count);
}

/**
 * _strlen_recursion - recursively generate the length of string
 * 
 * @s: string 
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	int count = 1;
	_strlen(s + 1, count);
}
