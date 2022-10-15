#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - prints the elements of struct dog
 * 
 * @param d 
 */
void print_dog(struct dog *d)
{
	if(d == NULL)
	{
		exit(1);
	}

	if(!(d->name))
	{
		printf("Name: (nil)\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}

	if (!d->age || d->age <= 0.0)
	{
		printf("Age: (nil)\n");
	}
	else
	{
		printf("Age: %f\n", d->age);
	}

	if (d->owner == NULL)
	{
		printf("Owner: (nil)\n");
	}
	else
	{
		printf("Owner: %s\n", d->owner);
	}
}
