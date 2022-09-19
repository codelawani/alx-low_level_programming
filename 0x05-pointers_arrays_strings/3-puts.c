#include "main.h"
/**
* _puts - prints a string
* @str: single character type
*/

void _puts(char *str)
{
	int i;

	while (str[i] != 0)
	{
	i++;
	_putchar(str[i]);
	}
}
