/**
* string_toupper - converts string to upper
* @s: Pointer to string to be converted
* Return: Pointer to converted string
*/

char *string_toupper(char *s)
{
int i;

i = 0;
while (s[i])
{
if (s[i] >= 'a' && s[i] <= 'z')
s[i] -= 32;
i++;
}
return (s);
}
