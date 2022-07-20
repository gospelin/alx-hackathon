#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - Checks if memory was allocated successfully
 *
 * @b: size  
 *
 */
void *malloc_checked(unsigned int b)
{
	char *str;

	str = malloc(sizeof(b) * b);

	if(str == NULL)
	{
		exit(98);
	}

	return (str);

}
