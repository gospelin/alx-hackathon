#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * The returned pointer shall point to a newly allocated space in memory,
 * which contains s1, followed by the first n bytes of s2, and null terminated
 * If the function fails, it should return NULL
 * If n is greater or equal to the length of s2 then use the entire string s2
 * if NULL is passed, treat it as an empty string
 *
 * @s1: first string
 * @s2: second string
 * @n: size
 * Return: concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int s1_length, s2_length, index, count;

	s1_length = _strlen(s1);
	s2_length = _strlen(s2);

	str = malloc(s1_length + s2_length * sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}

	if(s2 == NULL)
	{
		return '\0';
	}

	if (n >= s2_length)
	{
		n = s2_length;
	}

	for (index = 0; ((*(str + index) = *s1) && (*s1 != '\0')); s1++, index++)
		;

	for(count = 0, index = s1_length; count <= n; index++, s2++, count++)
		*(str + index) = *s2;

	return (str);
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
