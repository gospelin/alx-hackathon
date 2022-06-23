#include "main.h"
/**
 * _strncpy - copy a string
 * 
 * @dest: destination 
 * @src: source
 * @n: number of bytes
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (; (((*(dest + i) = *src) != '\0') && i < (n - 1)); i++, src++)
		;

	return (dest);
}

