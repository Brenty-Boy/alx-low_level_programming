#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize function for struct dog
 * @d: pointer to dog struct
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: return pointer to struct
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
