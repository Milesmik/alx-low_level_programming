#include "dog.h"

/**
 * struct dog - struct that stores the information of a dog
 *
 * @d: struct dog.
 * @name: name of the dog.
 * @age: dogs age.
 * @owner: dog's owner.
 *
 * Return: no return.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

