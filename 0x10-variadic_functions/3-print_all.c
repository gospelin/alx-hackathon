#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

void print_all(const char *const format, ...)
{
	int i = 0, j;
	char *str = "cifs";
	va_list args;

	va_start(args, format);

	while(format && format[i])
	{

	}
}
