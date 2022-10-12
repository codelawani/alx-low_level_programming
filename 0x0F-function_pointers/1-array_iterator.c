#include <stdlib.h>
/**
* array_iterator - executes a function on array elements
* @array: array to be iterated over
* @size: size of array
* @action: pointer to function
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	for (i = 0 ; i < size ; i++)
		action(array[i]);
}
