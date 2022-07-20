#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicates strings
 * @str: string
 *
 * Return: returns the pointer to the duplicate String
 */

char *_strdup(char *str)
{

	if (str == NULL)
		return (NULL);

	char *dup_char;
	int length = _strlen(str);

	dup_char = (char *)malloc(length * sizeof(char));

	if (dup_char == NULL)
		return (NULL);

	int count;

	for (count = 0; *str != '\0'; count++)
	{
		*(dup_char + count) = *str++;
	}
	*(dup_char + length) = '\0';

	return (dup_char);
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
