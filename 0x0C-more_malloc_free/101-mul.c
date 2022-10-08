#include <stdio.h>
#include <stdlib.h>
/**
* main - multiplies 2 numbers
*/

int main(int argc, char **argv)
{
	int product;
	if (argc != 3)
	{
		printf("Error\n");
		exit (98);
	}
	product = atoi(argv[1]) * atoi(argv[2]);
	printf("%d", product);
	return (product);
}
