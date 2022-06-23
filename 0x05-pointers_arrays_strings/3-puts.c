#include "main.h"
/**
 * _puts - prints to stdout with trailing newline
 * 
 * @str: string
 */
void _puts(char *str)
{
	for(; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
