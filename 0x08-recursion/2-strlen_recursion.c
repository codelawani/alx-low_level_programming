/**
* _strlen_recursion - Finds length of a string
* @s: Pointet to string
* Return: Length of string
*/

int _strlen_recursion(char *s)
{
	if (*s)
	return 1 + _strlen_recursion(s + 1);
	return ('\0');
}
