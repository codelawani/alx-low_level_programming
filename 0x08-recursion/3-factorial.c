/**
* factorial - Finds factorials of a number.
* @n: The number
* Return: -1 if n < 0 to indicate error.
* n if n > 0.
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
