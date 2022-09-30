#include "main.h"
/**
* _strcat - concatenates two strings
* @dest: first pointer parameter
* @src: secondb pointer parameter
* Return: Pointer to a string
*/
char *_strcat(char *dest, char *src)
{
	int j, dl;

	dl = 0;
	while (dest[dl])
	++dl;
	j = 0;
	while (src[j])
	{
	dest[dl] = src[j];
	++j;
	++dl;
	}
	dest[dl] = '\0';
	return (dest);
}
