#include "main.h"
/**
* print_most_numbers - Prints numbers
* Return: 0
*/
void print_most_numbers(void)
{
	int x;

	x = 0;
	while (x != 2 || x != 4 || x < 10)
	{
		_putchar(x + '0');
		x++;
	}
		_putchar('\n');
}

