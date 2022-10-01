#include "main.h"
/**
*reverse_array - Reverse arrys which contents are integers
*@a: The interger arguement
*@n: The numbers of interger contents
*Return: Void
*/


void reverse_array(int *a, int n)
{int j, b, c;
j = 0;
for (b = n - 1; b > j; b--)
{
c = a[b];
a[b] = a[j];
a[j] = c;
j++;
}
}
