#include <stdio.h>
#include <string.h>

/**
* main - prints name of file it was compiled from
* Return: Always 0
*/

int main(void)
{
	char *filename;

	filename = strchr("/"__FILE__, '/');
	printf("%s\n", filename + 1);
	return (0);
}
