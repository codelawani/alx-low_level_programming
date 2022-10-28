#include "main.h"

/**
* get_bit - gets bit value at given index
* @n: The bit
* @index: index to get value at - indices start at 0.
*	Index starts from the right.
* Return: bit value
*/

int get_bit(unsigned long int n, unsigned int index)
{
	int bit = (n >> index) & 1;

	return (bit);
}

/**
* clear_bit - sets bit value at given index to 0
* @n: The bit(s)
* @index: index of value to be cleared - indices start at 0.
*	index starts from the right.
* Return: 1 or - 1 if failed
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	int bit;

	if (index > 63)
		return (-1);

	bit = get_bit(*n, index);

	if (bit > 0)
		*n = *n - (1 << index);

	return (1);
}
