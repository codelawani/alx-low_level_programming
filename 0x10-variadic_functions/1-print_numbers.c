#include "variadic_functions.h"
/**
* print_numbers - Prints numbers followed by a new line
* @separator: seperator placed between integers
* @n: number of integers to be printed
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int index;
	va_list nums;
	int num;

	if (n == 0)
		return;
	va_start(nums, n);

	for (index = 0 ; index < n ; index++)
	{
	if (index != 0 && separator != NULL)
	{
		printf("%s", separator);
	}
	num = va_arg(nums, int);
	printf("%d", num);
	}
	va_end(nums);
	printf("\n");
}
