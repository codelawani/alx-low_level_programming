/**
*main - Prints numbers
*Description - Prints double digit combinations of 0 to 9.
*Return: 0
*/
#include <stdio.h>
int main(void)
{
	int a;
	int b;
	int c;

	for (a = 0 ; a <= 7 ; a++)
	{
	for (b = 1 ; b <= 8 ; b++)
	{
	for (c = 2 ; c <= 9 ; c++)
	{
	if (a >= b || b >= c || a >= c)
	{
	continue;
	}
	putchar (a % 10 + '0');
	putchar (b % 10 + '0');
	putchar (c % 10 + '0');
	if (a == 7 && b == 8 && c == 9)
	{
	break;
	}
	putchar (',');
	putchar (' ');
	}
	}
	}
	putchar ('\n');
	return (0);
}
