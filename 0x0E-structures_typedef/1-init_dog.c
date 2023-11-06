#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initializes dog struct
 * @d: pointer to struct dog
 * @name: pointer to name member of dog struct
 * @age: pointer to age memebr of dog struct
 * @owner: pointer to owner memeber of dog struct
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name  = name;
		d->age = age;
		d->owner = owner;
	}
}
