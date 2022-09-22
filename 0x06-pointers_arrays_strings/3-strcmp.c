/**
* _strcmp - Compares two strings
* @s1: pointer to string 1
* @s2: pointer to string 2
* Return: positive, negative zero value
*/
int _strcmp(char *s1, char *s2)
{
	while ((*s1 && *s2) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
