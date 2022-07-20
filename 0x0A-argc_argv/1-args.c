#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passed into it.
 * @argc: hnumber of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: returns 0 (Success);
 */

int main(int argc, char **argv)
{
	int count = argc - 1;

	printf("%d\n", count);

	return (0);
}
