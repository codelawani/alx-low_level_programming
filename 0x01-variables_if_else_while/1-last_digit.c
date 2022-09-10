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
	printf("last digit of n is %d and is greater than 5", g);
	}
	else if (g == 0)
	{
	printf("last digit of n is %d and is 0", g);
	}
	else if (g < 6 && g != 0)
	{
	printf("last digit of n is %d and is less than 6 and not 0", g);
	}
	return (0);
}
