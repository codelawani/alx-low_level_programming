#include "dog.h"
#include <stdlib.h>
/**
* new_dog - creates new dog
* @name: pointer to name of dog
* @age: age of dog
* @owner: pointer to owner of dog
* Return: Pointer to new dog created
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *d;

	d = malloc(sizeof(struct dog));
	if (d == NULL)
		return (NULL);

	d->name = name;
	d->age = age;
	d->owner = owner;

	return (d);
}
