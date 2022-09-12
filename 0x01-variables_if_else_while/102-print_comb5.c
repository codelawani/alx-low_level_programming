/**
*main - Prints numbers
*Description - Prints pairs of double digit combinations of 0 to 9.
*Return: 0
*/
#include <stdio.h>
int main(void)
{
	int a;
	int b;
	int c;
	int d;

	for (a = 0 ; a <= 9 ; a++)
	{
	for (b = 0 ; b <= 8 ; b++)
	{
	for (c = 0 ; c <= 9 ; c++)
	{
	for (d = 1 ; d <= 9 ; d++)
	{
	if (((c + d) - (a + b)) >= 1)
	{
	putchar (a + '0');
	putchar (b + '0');
	putchar (' ');
	putchar (c % 10 + '0');
	putchar (d % 10 + '0');
	if (a + b + c + d == 35)
	{
	continue;
	}
	putchar (',');
	putchar (' ');
	}
	}
	}
	}
	}
	putchar ('\n');
	return (0);
}
