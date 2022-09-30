/**
* _strchr - locates a character in a string
* @s: Pointer to string
* @c: Character to be located
* Return: pointer to first occurence of c
*/
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}

	return ('\0');
}
