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
 * _strncat - The _strncat function is similar to the _strcat function, except that
 * it will use at most n bytes from src; and
 * src does not need to be null-terminated if it contains n or more bytes
 *
 * @dest: destination
 * @src: source
 * @n: number of bytes
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int length, count = 0;

	length = _strlen(dest);

	
	for (; ((*(dest + length) = *(src + count)) != '\0') && count < (n - 1); length++, count++)
		;

	return (dest);
}
