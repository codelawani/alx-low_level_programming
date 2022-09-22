/**
* _strncpy - Copies a string
* @dest: pointer to string being copied to
* @src: Pointer to string being copied from
* @n: Number of characters to be copied
* Return: Pointer to string
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != src[n])
	{
	dest[i] = src[i];
	++i;
	}
	return (dest);
}
