#include "variadic_functions.h"
/**
* print_all - prints anything
* @format: format of output
*/
void print_all(const char * const format, ...)
{
	va_list str;
	unsigned int index = 0;
	char *ss, *separator;

	
	separator = "";
	va_start(str, format);
	while (format && format[index])
	{
	switch (format[index])
	{
	case 'c':
		printf("%s%c", separator, va_arg(str, int));
		break;
	case 'i':
		printf("%s%i", separator, va_arg(str, int));
		break;
	case 'f':
		printf("%s%f", separator, va_arg(str, double));
		break;
	case 's':
		ss = va_arg(str, char *);
		if (!ss)
		{
		printf("(nil)");
		break;
		}
		printf("%s%s", separator, ss);
		break;
	}
	separator = ", ";
	index++;
	}
	printf("\n"), va_end(str);
}
