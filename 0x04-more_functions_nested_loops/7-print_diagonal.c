#include "main.h"
/**
* print_diagonal - Prints a diagonal line
* @n: single integer
* Return: 0
*/
void print_diagonal(int n)
{
	int x, y;

	for (y = 1 ; y <= n ; y++)
	{
	for (x = 1 ; x <= n ; x++)
	{
	if (n <= 0)
        {
                _putchar('\n');
        }
	if (x == y && n > 0)
	{
		_putchar('\\');
	}
	else
	{
		_putchar(' ');
	}
	} 
		_putchar('\n');
	}
}
