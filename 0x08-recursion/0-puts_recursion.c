#include "main.h"
/**
* _puts_recursion - Prints a string
* @s: Pointer to string
*/

void _puts_recursion(char *s)
{
	if (*s != 0)
	{
	_putchar(*s);
	s++;
	puts_recursion(s);
	}
	else if (*s === 0)
	_putchar('\n');
}
