#include "main.h"

/**
*print_array - prints elements of an array of integers.
*@a: Among the value to be modified
*@n: Still another value
*Return: voidd
*/


void print_array(int *a, int n)
{int b = 0;
for (; b < n; b++)
{
printf("%d", a[b]);
if (b == n - 1)
{
continue;
}
printf(", ");
}
printf("\n");
}
