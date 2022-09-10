#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - Positive or negative
*Description - Checks if a random number is negative or positive
*Return:0
*/
int main(void)
{
	int n;
	int g;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	g = n % 10;
	if (g > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, g);
	}
	else if (g == 0)
	{
	printf("Last digit of %d is %d and is 0\n", n, g);
	}
	else if (g < 6 && g != 0)
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, g);
	}
	return (0);
}
