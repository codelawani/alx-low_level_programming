#include <stdio.h>
#include <stdlib.h>
/**
* create_array - Creates memory for an array
* @size: Size of array
* @c: First element of array
* Return: Pointer to array
*/

char *create_array(unsigned int size, char c)
{
	char *p;

	if (size == 0)
	return ('\0');
	p = malloc(size * sizeof(char));
	*p = c;
	return (p);
}
