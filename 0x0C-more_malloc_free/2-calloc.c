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
	char *filler;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	filler = p;
	for (i = 0 ; i < (size * nmemb) ; i++)
	{
		filler[i] = '\0';
	}
	return (p);
}
