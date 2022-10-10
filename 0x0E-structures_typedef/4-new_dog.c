#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: struct dog
 * if fails, return NULL
 */
dog_t *new_dog(char *name, float age, char *owner);
{
	dog_t *my_dog;
	int a, fname, fowner;

	my_dog = malloc(sizeof(*my_dog));
	if (my_dog == NULL || !(name) || !(owner))
	{
		free(my_dog);
		return (NULL);
	}
	
	for (fname = 0; name[fname]; fname++)
		;

	for (fowner = 0; owner[fowner]; fowner++)
		;

	my_dog->name = malloc(fname + 1);
	my_dog->owner = malloc(fowner + 1);

	if (!(my_dog->name) || !(my_dog->owner))
	{
		free(my_dog->owner);
		free(my_dog->name);
		free(my_dog);
		return (NULL);
	}

	for (a = 0; a < fname; a++)
		my_dog->name[a] = name[a];
	my_dog->name[a] = '\0';

	my_dog->age = age;

	for (a = 0; a < fowner; a++)
		my_dog->owner[a] = owner[a];
	my_dog->owner[a] = '\0';

	return (my_dog);
}	
