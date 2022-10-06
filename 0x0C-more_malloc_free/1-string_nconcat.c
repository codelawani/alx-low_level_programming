#include <stdlib.h>
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
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	s12 = malloc(sizeof(*s1) + sizeof(*s2) + 1);
	if (s12 == 0)
		return (NULL);
	for (i = 0 ; s2[i] ; i++)
	{
		s12[i] = s1[i];
	}
	for (j = 0 ; j < n ; j++)
	{
/*		if (s2[j] == '\0')
		break;*/
		s12[i + 1 + j] = s2[j];
	}
	s12[i + n] = '\0';
	return (s12);
}
