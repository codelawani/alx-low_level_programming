/**
* checker - Finds square root of a number
* @n: number to find square root of
* @r: number used to check for square root
* Return: Square root or -1 if it doesn't have
* natural square root
*/

int checker(int r, int n)
{
	if (r * r == n)
		return (r);
	else if (n < 0 || r == n)
		return (-1);
	return (checker(r + 1, n));
}

/**
* _sqrt_recursion - Finds square root of a number
* @n: number to find square root of
* Return: Square root or -1 if it doesn't have
* natural square root
*/

int _sqrt_recursion(int n)
{
	int sqr;

	sqr = checker(0, n);
	return (sqr);
}
