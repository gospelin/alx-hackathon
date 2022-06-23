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
 * _strcmp - compares two string
 * 
 * @s1: first string
 * @s2: second string
 * Return: 
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; *s1 != '\0'; i++, s1++, s2++)
	{
		return (s1[i] - s2[i]);
	}
}
