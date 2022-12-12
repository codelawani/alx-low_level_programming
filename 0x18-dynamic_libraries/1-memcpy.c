/**
* _memcpy - copies a memory area
* @dest: copy destination
* @src: copy source
* @n: bytes to be copied
* Return: pointer to destination string
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
		dest[i] = src[i];
	return (dest);
}
