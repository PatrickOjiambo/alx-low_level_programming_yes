#include "dog.h"
#include <stddef.h>
/**
 * init_dog - initializes a dog structure
 * @d: pointer to struct dog
 * @name: pointer to dog's name
 * @age: age of the dog
 * @owner: pointer to dog owner's name
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

