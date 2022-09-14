#include "main.h"
/**
* print_last_digit - Prints last digit.
* @c: is the parameter being used.
* Return: remainder
*/
int print_last_digit(int c)
{
	int d;
	d = c % 10;
	if (d < 0)
	{
	d *= -1;
	_putchar(d + '0');
	return (c % 10);
}
