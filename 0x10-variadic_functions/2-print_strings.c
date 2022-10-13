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
	char *str;

	va_start(strings, n);
	for (index = 0 ; index < n ; index++)
	{
	if (index && separator)
		printf("%s", separator);
	str  = va_arg(strings, char*);
	if (!(str))
		printf("(nil)");
	else
		printf("%s", str);
	}
	va_end(strings);
	printf("\n");
}
