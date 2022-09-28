#include "main.h"
/**
* _print_rev_recursion - Prints reverse string
* @s: pointer to string
*/

void _print_rev_recursion(char *s)
{
	if (*s != 0)
	{
		s++;
		_print_rev_recursion(s);
	}
		_putchar (*s);
}
