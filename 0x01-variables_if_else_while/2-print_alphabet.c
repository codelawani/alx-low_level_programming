/**
*main - Prints a loop
*Description - Prints a loop of the 26 letters of the alphabets
*Return: 0
*/
#include <stdio.h>
int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; ++x)
	{
	putchar (x);
	}
	putchar ('\n');
	return (0);
}
