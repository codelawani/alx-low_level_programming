#include "main.h"
/**
* swap_int - Swaps values of variables
* @a: First integer
* @b: Second integer
*/
void swap_int(int *a, int *b)
{
	int p, q;

	p = *a;
	q = *b;
	*a = q;
	*b = p;
}
