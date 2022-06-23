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
	for(; *s != '\0'; s++, count++)
		;
	
	return (count);
}
