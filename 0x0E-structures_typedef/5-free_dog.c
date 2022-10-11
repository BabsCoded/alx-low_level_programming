#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - creates free dogs
 * @d: struct dog
 *
 * Return: no return
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
