#include "main.h"
/**
* print_sign - Prints sign of number
* @n: is the parameter being used.
* Return: 1 if positive, 0 if 0 and - if negative.
*/
int print_sign(int n)
{
	if (n > 0)
	{
	return (1);
	_putchar('+');
	}
	else if (n == 0)
	{
	return (0);
	_putchar ('0');
	}
	else
	{
	return (-1);
	_putchar ('-');
	}
}
