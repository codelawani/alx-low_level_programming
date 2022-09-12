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

	for (a = 0 ; a <= 98 ; a++)
	{
	for (b = a + 1 ; b <= 99 ; b++)
	{
	putchar (a / 10 + '0');
	putchar (a % 10 + '0');
	putchar (' ');
	putchar (b / 10 + '0');
	putchar (b % 10 + '0');
	if (a + b == 197)
	{
	continue;
	}
	putchar (',');
	putchar (' ');
	}
	}
	putchar ('\n');
	return (0);
}
