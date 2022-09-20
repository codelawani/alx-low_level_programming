#include "main.h"
/**
* puts_half - prints second half of string
* @str: Pointer character
*/
void puts_half(char *str)
{
	int i, n, x;

	i = 0;
	n = 0;
	while (str[i])
	{
	i++;
	n++;
	}
	x = n / 2;
	while (str[x])
	{
	_putchar(str[x]);
	x++;
	}
	_putchar('\n');
}
