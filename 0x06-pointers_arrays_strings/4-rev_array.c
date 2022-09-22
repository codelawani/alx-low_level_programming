/**
* reverse_array - reverses an array
* @a: Pointer to string to be reversed
* @n: Number of characters to be reversed
*/

void reverse_array(int *a, int n)
{
int i, j, temp, *begin, *end;

begin = a;
end = a;
i = 0;
while (i < n - 1)
{
++end;
++i;
}
for (j = 0 ; j < n / 2 ; j++)
{
temp = *begin;
*begin = *end;
*end = temp;
++begin;
--end;
}
}


