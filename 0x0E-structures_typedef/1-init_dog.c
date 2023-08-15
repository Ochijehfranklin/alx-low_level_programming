#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - To initialize the variable of type struct dog
 * @d: pointer to struct dog
 * @name: name of the dog to initializ
 * @age: age of the dog
 * @owner: ownwer of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
