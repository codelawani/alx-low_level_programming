/**
*main - prints text
*Description - a program that prints the alphabet in loops.
*Return: 0
*/
#include <stdio.h>
int main(void)
{
	char x;

	for (x = 'a' ; x <= 'z' ; ++x)
	{
	putchar (x);
	}
	for (x = 'A' ; x <= 'Z' ; ++x)
	{
	putchar (x);
	}
	putchar ('\n');
	return (0);
}

