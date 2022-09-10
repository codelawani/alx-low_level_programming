#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - Positive or negative
*Description - Checks if a random number is negative or positive
*Return:0
*/
int main(void)
{

	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n >= 0)
	{
	puts("The number is positive");
	}
	else if (n == 0)
	{
	puts("The number is zero");
	}
	else
	{
	puts("The number is negative");
	}
	return (0);
}
