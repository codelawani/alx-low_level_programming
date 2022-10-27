#include "main.h"

/**
 * print_binary - prints binary numbers
 * @n: decimal integer to be converted
 */
void print_binary(unsigned long int n)
{
	int p, c = 0;
	long unsigned int reducer;

	if (!n)
		_putchar('0');

	for (p = 32 ; p >= 0 ; p--)
	{
		reducer = reduce(p);
		if (reducer <= n)
		{
			n -= reducer;
			_putchar('1'), c = 1;
			continue;
		}
		else if (c)
			_putchar('0');
	}
}

/**
 * reduce - Returns a multiple of 3;
 * @p: number of times to multiply 2;
 * Return: multiple of 2;
 */

long unsigned int reduce(int p)
{
	long unsigned int num = 1;

	while (p--)
		num *= 2;
	return (num);
}
