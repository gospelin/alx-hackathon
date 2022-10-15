#include <stdio.h>
#include "function_pointers.h"
/**
 * @brief 
 * 
 * @param name 
 * @param f 
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
