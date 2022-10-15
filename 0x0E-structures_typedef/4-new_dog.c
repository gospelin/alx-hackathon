#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - Creates new dog
 * 
 * @param name 
 * @param age 
 * @param owner 
 * @return dog_t* 
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));

	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;

	return (new_dog);
}
