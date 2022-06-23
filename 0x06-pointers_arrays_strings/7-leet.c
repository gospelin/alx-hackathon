#include "main.h"

/**
 * leet - encodes a string into 1337.
 *
 * Letters a and A should be replaced by 4
 * Letters e and E should be replaced by 3
 * Letters o and O should be replaced by 0
 * Letters t and T should be replaced by 7
 * Letters l and L should be replaced by 1
 * You can only use one if in your code
 * You can only use two loops in your code
 * You are not allowed to use switch
 * You are not allowed to use any ternary operation
 *
 * @s: input string
 * Return: pointer to encoded string
 */
char *leet(char *s)
{
	char lowercase[] = {'a', 'e', 'o', 't', 'l'};
	char uppercase[] = {'A', 'E', 'O', 'T', 'L'};

	char encode[] = {'4', '3', '0', '7', '1'};
	int count = 0, i;

	for (; *(s + count) != '\0'; count++)
	{
		for (i = 0; i < 5; i++)
		{
			if(*(s + count) == lowercase[i] || *(s + count) == uppercase[i])
			{
				*(s + count) = encode[i];
				break;
			}
		}
	}
	return (s);
}
