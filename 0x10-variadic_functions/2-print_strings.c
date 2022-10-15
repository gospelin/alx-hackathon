#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

void print_strings(const char *separator, const unsigned int n, ...)
{
	int i = 0;

	va_list args;
	va_start(args, n);
	char* str;

	for(; i < n; i++)
	{
		str = va_arg(args, char*);
		if (str)
		{
			printf("%s", str);

			if(separator && i < n - 1)
			{
				printf("%s", separator);
			}
		}
		else
		{
			printf("nil");
		}
	}
	printf("\n");
}
