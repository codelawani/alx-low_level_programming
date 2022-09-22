/**
* _strcmp - Compares two strings
* @s1: pointer to string 1
* @s2: pointer to string 2
* Return: positive, negative zero value
*/
int _strcmp(char *s1, char *s2)
{
	int i, flag;

	flag = 0;
	for (i = 0 ; s1[i] != '\0' && s2[i] != '\0' ; i++)
	{
	if (s1[i] != s2[i])
	{
	flag = s1[0] - s2[0];
	break;
	}
	}
	return (flag);
}
