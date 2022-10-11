#include "dog.h"
#include <stdio.h>
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
	dog_t *doggy;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);
	doggy = malloc(sizeof(dog_t));
	if (doggy == NULL)
		return (NULL);
	doggy->name = malloc(strlent(name) + 1);
	if (doggy->name == NULL)
	{
		free(doggy);
		return (NULL);
	}
	doggy->owner = malloc(strlent(owner) + 1);
	if (doggy->owner == NULL)
	{
		free(doggy->name);
		free(doggy);
		return (NULL);
	}

	doggy->name = strcopy(doggy->name, name);
	doggy->age = age;
	doggy->owner = strcopy(doggy->owner, owner);

	return (doggy);
}

/**
* strlent - Gets length of a string
* @string: Pointer to string
* Return: length of string
*/

int strlent(char *string)
{
	int i;

	for (i = 0 ; string[i] ; i++)
	;

	return (i);
}

/**
* strcopy - copies a string
* @dest: pointer to copy destination
* @src: Pointer to copy source
* Return: Pointer to copy destination
*/

char *strcopy(char *dest, char *src)
{
	int i;

	for (i = 0 ; src[i] ; i++)
	dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
