#include "main.h"

/**
* flip_bits - counts number of bits flipped to get from
*	one number to another
* @n: integer to be flipped
* @m: integer to flip to
* Return: number of bits flipped
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int  num;
	int count = 0;

	num = n ^ m;

	while (num)
	{
		if (num & 1)
			count++;
		num >>= 1;
	}
	return (count);
}
