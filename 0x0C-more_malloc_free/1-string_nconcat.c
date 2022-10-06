#include <stdlib.h>
#include <stdio.h>
/**
* string_nconcat - concatenates 2 strings
* @s1: first string
* @s2: second string
* @n: number of characters to concatenate in s2
* Return: Pointer to newly allocated memory
* NULL if function fails
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s12;
	unsigned int i, j, len, lens;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len = 0;
	while (s1[len])
	len++;
	lens = 0;
	while (s2[lens])
	lens++;
	if (n >= lens)
	n = lens;
	s12 = malloc((sizeof(*s1) * len) + n + 1);
	if (s12 == 0)
		return (NULL);
	for (i = 0 ; s1[i] ; i++)
	{
		s12[i] = s1[i];
	}
	for (j = 0 ; j < n ; j++)
	{
		s12[i] = s2[j];
		i++;
	}
	s12[i] = '\0';
	return (s12);
}
