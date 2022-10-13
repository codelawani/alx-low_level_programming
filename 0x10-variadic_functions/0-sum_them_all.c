#include <stdarg.h>
/**
* sum_them_all - sums all arguments passed
* @n: counts number of arguments
* Return: sum of all arguments
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int index;
	int sum;

	if (n == 0)
		return (0);

	va_start(nums, n);
	sum = 0;
	for (index = 0; index < n; index++)
	{
		sum += va_arg(nums, int);
	}
	va_end(nums);

	return (sum);
}
