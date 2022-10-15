#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - struct for a dog
 * @name: name of the dog
 * @age: Dog's age
 * @owner: Dog's owner
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
