#include <stdio.h>
#include "main.h"

/**
 * main - prints the  name of the executable file to the screen
 * @argc: holds the count to the number of command line arguments
 * @argv: holds the command line arguments
 * Return: return 0 (Success)
 */

int main(int argc, char **argv)
{
	int count;

	/* for (count = 0; count < argc; count++) */
	/*{ */
		printf("%s", *(argv + 0));
	/*}*/
	printf("\n");
	return (0);
}
