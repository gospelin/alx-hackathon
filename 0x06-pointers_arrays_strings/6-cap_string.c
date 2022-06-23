#include "main.h"
/**
 * cap_string - Capitalize the first character of each string
 * 
 * @s: input string
 * Return: Capitalized String
 */
char *cap_string(char *s)
{
	int count = 0, i;

	/* int separator[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125}; */

	char separator[] = {' ','\t','\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	for (; *(s + count) != '\0'; count++)
	{
		for (i = 0; i < 13; i++)
		{
			if (*(s + count) == separator[i])
			{
				if ((*(s + (count + 1)) >= 'a') && (*(s + (count + 1)) <= 'z'))
				{
					*(s + (count + 1)) = *(s + (count + 1)) - 32;
				}
			}
		}
	}
	return (s);
}
