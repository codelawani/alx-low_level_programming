#include "main.h"
/**
* more_numbers - Prints numbers
* Return: 0
*/
void more_numbers(void)
{
	int x, y;

	for (y = 0 ; y <= 10 ; y++)
	{
	for (x = 0 ; x <= 14 ; x++)
	{
		_putchar(x / 10 + '0');
		_putchar(x % 10 + '0');
	}
		_putchar('\n');
	}
}
