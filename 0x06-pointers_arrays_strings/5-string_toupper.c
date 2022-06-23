#include "main.h"
/**
 * string_toupper - converts string to uppercase
 * 
 * @s: string 
 * Return: pointer to string 
 */
char *string_toupper(char *s)
{
	int count = 0;

	for (; *(s + count) != '\0'; count++)
	{
		if (*(s + count) >= 'a' && *(s + count) <= 'z')
		{
			*(s + count) = *(s + count) - 32;
		}
	}
	return (s);
}
