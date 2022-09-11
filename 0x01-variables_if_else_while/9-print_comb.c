/**
*main - Prints numbers
*Description - Prints digits from 0 to 9
*Return: 0
*/
#include <stdio.h>
int main(void)
{
	int y;
	int x;
	int z;

	x = ',';
	z = ' ';
	for (y = 0 ; y < 10 ; ++y)
	{
	putchar (y % 10 + '0');
	putchar (x);
	putchar (z);
	}
	putchar ('\n');
	return (0);
}
