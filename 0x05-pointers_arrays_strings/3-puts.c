#include "main.h"
/**
* _puts - prints a string
* @str: single character type
*/

void _puts(char *str)
{
	int c, i;

	c = 0;
	i = 0;
	while (str[i] != 0)
	{
	c++;
	i++;
	_putchar(str[i]);
	}
}
