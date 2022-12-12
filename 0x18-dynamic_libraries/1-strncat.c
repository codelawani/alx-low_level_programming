/**
* _strncat - concatenates n bytes of a string
* @dest: First pointer character
* @src: Second pointer character
* @n: integer that indicates bytes to copy
* Return: Pointer to string
*/
char *_strncat(char *dest, char *src, int n)
{
	int j, dlen;

	dlen = 0;
	while (dest[dlen])
	++dlen;
	j = 0;
	while (src[j] != src[n])
	{
	dest[dlen] = src[j];
	++j;
	++dlen;
	}
	return (dest);
}
