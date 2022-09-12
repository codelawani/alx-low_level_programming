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

	for (a = 0 ; a <= 8 ; ++a)
	{
	for (b = 1 ; b <= 9 ; ++b)
	{
	if (a == b || a > b)
	{
	continue;
	}
	if (a + b >= 17)
	{
	break;
	}
	putchar (a % 10 + '0');
	putchar (b % 10 + '0');
	if (a == 8 && b == 9)
	{
	break;
	}
	putchar (',');
	putchar (' ');
	}
	}
	putchar ('\n');
	return (0);
}
