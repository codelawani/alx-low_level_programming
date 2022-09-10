/**
*main - Prints text
*Description - Prints a loop through all alphabets excluding q and e.
*Return: 0
*/
#include <stdio.h>
int main(void)
{
	char x;

	for (x = 'a' ; x <= 'z' ; ++x)
	{
	if (x == 'e' || x == 'q')
	{
	continue;
	}
	putchar (x);
	}
	putchar ('\n');
	return (0);
}


