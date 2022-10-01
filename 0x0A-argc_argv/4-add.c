#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
* main - Adds natural numbers
* @argc: Number of arguments
* @argv: arguments
* Return: 1 if not 2 arguments
*/

int main(int argc, char **argv)
{	
	int i, result;
	
	result = 0;
	if (argc < 2)
	printf("0\n");
	for (i = 0 ; argv[i] != 0 ; i++)
	{
		if (isdigit(argv[i])
		result += atoi(argv[i])
		printf("Error");
		return (1);
	}
	return (0);
}
