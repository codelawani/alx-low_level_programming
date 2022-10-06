#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
* malloc_checked - allocates memory
* @b: size of allocated memory
* Return: Pointer to memory
*/
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p  == NULL)
	{
	exit(98);
	}
	return (p);
}
