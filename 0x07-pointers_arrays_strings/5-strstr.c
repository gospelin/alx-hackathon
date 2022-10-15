#include "main.h"
/**
 * _strlen - length of string
 *
 * @s: string
 * Return: returns the length of the string
 */
int _strlen(char *s)
{
	int count = 0;
	for (; *s != '\0'; s++, count++)
		;

	return (count);
}

/**
 * _strstr - a function that locates a substring.
 * The _strstr() function finds the first occurrence of the
 * substring needle in the string haystack.
 * The terminating null bytes (\0) are not compared
 *
 * @haystack: string
 * @needle: substring
 * Return: a pointer to the beginning of the located substring, 
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int length = _strlen(needle);
	int i, j, count;

	for (; *needle != '\0'; needle++)
	{
		for(; *haystack != '\0'; haystack++)
		{
			return (haystack);
		}
	}
}
