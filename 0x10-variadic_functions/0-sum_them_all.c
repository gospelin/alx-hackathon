#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	int i = 0, sum = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(arg, n);

	while (i < n)
	{
		sum += va_arg(arg, int);
		i++;
	}
	va_end(arg);

	return (sum);
}
