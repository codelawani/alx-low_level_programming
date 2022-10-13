#include "variadic_functions.h"

/**
* print_strings - Prints strings, followed by a new line.
* @separator: seperator between strings
* @n: number of strings
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int index;
	va_list strings;
	const char *str;

	if (n == 0)
		return;
	va_start(strings, n);
	for (index = 0 ; index < n ; index++)
	{
	if (index != 0 && separator != NULL)
		printf("%s", separator);
	if (strings == NULL)
		printf("(nil)");
	str  = va_arg(strings, const char*);
	printf("%s", str);
	}
	va_end(strings);
	printf("\n");
}
