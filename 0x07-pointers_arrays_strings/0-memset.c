#include "main.h"
/**
 * _memset - The _memset() function fills the first n bytes 
 * of the memory area pointed to by s with the constant byte b
 *
 * @s: string
 * @b: character
 * @n: bytes
 * Return: a pointer to the memory space s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		*s++ = b;
	}
}
