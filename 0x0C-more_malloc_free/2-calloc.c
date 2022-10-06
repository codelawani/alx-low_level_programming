#include <stdlib.h>
/**
* _calloc - allocates memory for an array
* @nmemb: total elements of array
* @size: size of each element
* Return: pointer to array
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == 0)
		return (NULL);
	return (p);
}
