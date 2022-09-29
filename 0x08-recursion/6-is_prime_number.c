/**
* primecheck - checks if number is prime
* @n: Number to be checked
* @r: number used to check
* Return: 1 if prime or 0 if otherwise
*/

int primecheck(int n, int r)
{
	if (n <= 1)
		return (0);
	if (r == n)
		return (1);
	if (n % r == 0 && r > 1)
		return (0);
	return (primecheck(n, r + 1));
}

/**
* is_prime_number - checks if number is prime
* @n: Number to be checked
* Return: 1 if prime or 0 if otherwise
*/

int is_prime_number(int n)
{
	int prime;

	prime = primecheck(n, 1);
	return (prime);
}
