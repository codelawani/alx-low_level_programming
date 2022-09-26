/**
* _strchr - locates a character in a string
* @s: Pointer to string
* @c: Character to be located
* Return: pointer to first occurence of c
*/

char *_strchr(char *s, char c)
{
while (*s)
{
if (*s == c)
{
return (s);
}
s++;
}
return ('\0');
}
