#include "main.h"
/**
 * _strcpy - a function that copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer pointed to by dest
 *
 * @dest: pointer to destination
 * @src: pointer to source string
 * Return: char* pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (; ((*(dest + i) = *src) != '\0'); i++, src++)
		;

	*(dest + i) = '\0';

	return (dest);
}
