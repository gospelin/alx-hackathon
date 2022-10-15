#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i = 0;
	va_list arg;

	va_start(arg, n);

	while (i < n)
	{
		printf("%d", va_arg(arg, int));

		if (separator && i < n - 1)
		{
			printf("%s", separator);
		}
		i++;
	}
	printf("\n");

	va_end(arg);
}
