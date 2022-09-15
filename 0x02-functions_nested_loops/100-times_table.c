#include "main.h"
/**
* print_times_table - Prints n timestable.
* @n: parameter involved
* Return: 0
*/
void print_times_table(int n)
{
	int x, y;

	x = 0;
	while (x <= 12)
	{
	y = 0;
	while (y <= 12)
	{
	z = x * y;
	n = z;
	if (y != 0)
	{
	_putchar(',');
	_putchar(' ');
	}
	if ((z / 10) == 0 && y != 0)
	{
	_putchar(' ');
	}
	if ((z / 10) != 0)
	{
	_putchar(z / 10 + '0');
	}
	_putchar(z % 10 + '0');
	y++;
	}
	x++;
	_putchar('\n');
	}
}

