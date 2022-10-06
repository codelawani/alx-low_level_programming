#include <stdlib.h>
/**
* array_range - prints array within a range
* @min: first element
* @max: last element
* Return: pointer to array
*/
int *array_range(int min, int max)
{
	int index, diff, element, *p;

	diff  = (max - min + 1);
	if (min > max)
		return (NULL);
	p = malloc(diff * sizeof(*p));
	if (p == 0)
		return (NULL);
	element = min;
	for (index = 0 ; index < diff && element <= max ; index++)
	{
		p[index] = element;
		element++;
	}
	return (p);
}
