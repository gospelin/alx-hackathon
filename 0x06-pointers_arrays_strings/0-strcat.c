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
 * _strcat - function appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of dest,
 * and then adds a terminating null byte
 *
 * @dest: destination
 * @src: source
 * Return: Returns a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int length, count = 0;

	length = _strlen(dest);

	for (; ((*(dest + length) = *(src + count)) != '\0'); length++, count++)
		;

	*(dest + length) = '\0';
	return (dest);
}
