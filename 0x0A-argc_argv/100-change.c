/**
* main - prints change
* Description - A program that prints mininimum number
*	of coins to make change for an amount of money
* @argc: Number of arguments
* @argv: Arguments passed
* Return: 0
*/
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv)
{
	int i, cents, x, result;
	int coin[5] = {25, 10, 5, 2, 1};

	result = 0;
	x = 1;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
		cents = atoi(argv[1]);
	if (cents < 0)
		printf("0\n");
	while (cents > 0)
	{
	for (i = 0 ; i < 5 ; i++)
	{
		x = cents / coin[i];
	if (x >= 1)
	{
		result += x;
		break;
	}
	}
		cents -= x * (coin[i]);
	}
	printf("%d\n", result);
	return (0);
}
