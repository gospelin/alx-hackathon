#include "main.h"
#include <stdlib.h>
/**
 * str_concat - Concatenate two strings
 * 
 * @s1: first string 
 * @s2: second string
 * Return concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	if (s2 == NULL)
	{
		return ('\0');
	}

	char *concat_string;
	int concat_len = _strlen(s2);

	concat_string = malloc(concat_len * sizeof(char));

	if (concat_string == NULL)
	{
		return NULL;
	}

	int count = 0;
	for (; *s1 != '\0'; count++)
	{
		*(concat_string + count) = *s1++;
	}
	for (; *s2 != '\0'; count++)
	{
		*(concat_string + count) = *s2++;
	}
	*(concat_string + count) = '\0';
	return (concat_string);
}

/**
 * _strlen - calculates string length
 *
 * @s: String character
 * Return: returns string length
 */

int _strlen(char *s)
{
	int length = 0;

	for (; *s != '\0'; s++)
		length++;

	return (length);
}
