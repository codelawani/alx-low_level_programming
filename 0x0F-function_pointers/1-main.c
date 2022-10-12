#include <stdio.h>
#include "function_pointers.h"
/*int add(int a, int b)
{
  return (a + b);
}

int main()
{
  //int c;
  int (*p)(int, int) = add;
  //p = add;
  //c = (*p)(2,3);
  printf("%d", (*p)(2,3));
  return (0);
}*/


/**
 * print_elem - prints an integer
 * @elem: the integer to print
 *
 * Return: Nothing.
 */
void print_elem(int elem)
{
    printf("%d\n", elem);
}

/**
 * print_elem_hex - prints an integer, in hexadecimal
 * @elem: the integer to print
 *
 * Return: Nothing.
 */
void print_elem_hex(int elem)
{
    printf("0x%x\n", elem);
}
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int array[5] = {0, 98, 402, 1024, 4096};

    array_iterator(array, 5, &print_elem);
    array_iterator(array, 5, &print_elem_hex);
    return (0);
}
