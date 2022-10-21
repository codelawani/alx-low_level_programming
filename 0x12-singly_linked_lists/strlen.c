/**
* _strlen - Gets length of a string
* @str: string
* Return: length of string
*/

int _strlen(const char *str)
{
	int len = 0;

        while (str[len])
        len++;

        return (len);
}
