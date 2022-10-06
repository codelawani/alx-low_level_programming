#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
* malloc_checked - allocates memory
* @b: size of allocated memory
*/
void *malloc_checked(unsigned int b)
{
	malloc(b);
	if (malloc(b) == NULL)
	{
	exit(98);
	}
	return (malloc(b));
}
