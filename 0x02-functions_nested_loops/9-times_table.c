#include "main.h"
/**
* times_table - Prints 9 timestable.
* Return: 0
*/
void times_table(void)
{
	int x, y, z;

	x = 0;
	while (x <= 9)
	{
	y = 0;
	while (y <= 9)
	{
	z = x * y;
	if ((z / 10) != 0)
	{
	_putchar(z / 10 + '0');
	}
	_putchar(z % 10 + '0');
	if (y == 9)
	{
	break;
	}
	_putchar(',');
	_putchar(' ');
	if ((z / 10) == 0)
	{
	_putchar(' ');
	}
	y++;
	}
	x++;
	_putchar('\n');
	if (z == 81)
	{
	break;
	}
	}
}

