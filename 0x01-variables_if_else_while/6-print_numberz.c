/**
*main - Prints numbers
*Description - Prints digits from 0 to 9
*Return: 0
*/
#include <stdio.h>
int main(void)
{
	char y;

	for (y = '0' ; y <= '9' ; ++y)
	{
	putchar (y);
	}
	putchar ('\n');
	return (0);
}
