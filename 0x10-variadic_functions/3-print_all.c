#include "variadic_functions.h"
/**
* print_all - prints anything
* @format: format of output
*/
void print_all(const char * const format, ...)
{
	va_list str;
	unsigned int index = 0, j, c = 0;
	char *ss;
	const char arg_t[] = "cifs";

	va_start(str, format);
	while (format && format[index])
	{
	j = 0;
	while (arg_t[j])
	{
		if (format[index] == arg_t[j] && c)
		{
		printf(", ");
		break;
		}j++;
	}
	switch (format[index])
	{
	case 'c':
		printf("%c", va_arg(str, int)), c = 1;
		break;
	case 'i':
		printf("%i", va_arg(str, int)), c = 1;
		break;
	case 'f':
		printf("%f", va_arg(str, double)), c = 1;
		break;
	case 's':
		ss = va_arg(str, char *), c = 1;

		if (!ss)
		{
		printf("(nil)");
		break;
		}
		printf("%s", ss);
		break;
	}
	index++;
	}
	printf("\n");
	va_end(str);
}
