#include <stdlib.h>
/**
* int_index - searches for an integer
* @array: array to be searched
* @size: size of array
* @cmp: pointer to function that compares values
* Return: index of array or -1 if failed.
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;
	int check;

	if (array == NULL || cmp == NULL)
		return(0);
	if (size <= 0)
		return (-1);
	for (index = 0 ; index < size ; index++)
	{
		check = cmp(array[index]);
		if (check == 1)
			return (index);
	}
	return (-1);
}
