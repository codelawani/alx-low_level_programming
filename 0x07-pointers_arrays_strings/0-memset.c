/**
* _memset - Fills memory area
* @s: pointer to memory area
* @b: contains value to be filled into area
* @n: number of bytes to fill
* Return: pointer to memory area
*/
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
		s[i] = b;
	return (s);
}
