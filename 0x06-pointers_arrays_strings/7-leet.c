#include "main.h"

/**
* leet - Encodes a string into 1337.
*
* @s: takes a pointer to the input string.
*
* Return: Returns an encoded string.
*/

char *leet(char *s)
{
	int i = 0, j;
	char s1[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'},
	     s2[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};

	while (s[i] != '\0')
	{
		for (j = 0; j < 10; j++)
			if (s[i] == s2[j])
				s[i] = s1[j];

		i++;
	}

	return (s);
}
