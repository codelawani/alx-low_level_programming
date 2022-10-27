#include "main.h"
/**
* binary_to_uint - convert binary to unsigned integer
* @b: pointer to string of binary numbers
* Return: converted number or 0 if fail
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int current, len = 0, n = 0;

	if (b == NULL)
		return (0);
	while (b[len])
		len++;

	while (*b)
	{
		current = (*b) - 48;
		if (current > 1)
			return (0);
		len--;
		n += current << len;
		b++;
	}

	return (n);
}
