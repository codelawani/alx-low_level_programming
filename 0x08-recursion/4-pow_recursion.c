/**
* _pow_recursion - finds value of x raised to y
* @x: number to find power y of
* @y: power of x
* Return: 0 if y is lower than 0 or
*	value of x raised to power of y
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
