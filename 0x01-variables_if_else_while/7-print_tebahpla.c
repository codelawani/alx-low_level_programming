/**
*main - Prints alphabets
*Description - Prints alphabets in reverse order
*Return: 0
*/
#include <stdio.h>
int main(void)
{
	char r;

	for (r = 'z' ; r >= 'a' ; --r)
	{
	putchar (r);
	}
	putchar ('\n');
	return (0);
}
