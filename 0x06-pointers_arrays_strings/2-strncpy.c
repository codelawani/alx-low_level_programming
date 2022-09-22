/**
* _strncpy - Copies a string
* @dest: pointer to string being copied to
* @src: Pointer to string being copied from
* @n: Number of characters to be copied
* Return: Pointer to string
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i, slen;

	slen = 0;
	while (src[slen])
	++slen;
	i = 0;
	while (src[i] != src[n])
	{
	dest[i] = src[i];
	if (n > slen)
	dest[i] = '\0';
	++i;
	}
	return (dest);
}
