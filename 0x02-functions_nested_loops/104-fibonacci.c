#include <stdio.h>

/**
 * main - runs code
 * Return: Always zero
 */

int main()
{
	unsigned long int a, b, k, term;

	a = 1, b = 2;
	printf("%lu, %lu", a, b);

	for (k = 3; k <= 98; k++)
	{
		term = a + b;
		if (term < b)
		{
			c = (a + b) / 100;
			d = (a + b) % 100;
			printf(", %lu%lu", term / 100, term % 100);
		else
			printf(", %lu", term);
		a = b;
		b = term;
	}
	printf("\n");

	return (0);
}
