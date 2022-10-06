#include <stdlib.h>
#include "main.h"
/**
* malloc_checked - allocates memory
* @b: size of allocated memory
* Return: Pointer to memory
*/
void *malloc_checked(unsigned int b)
{
	malloc(b);

	if (malloc(b)  == NULL)
	{
		exit(98);
	}
	return (malloc(b));
}
