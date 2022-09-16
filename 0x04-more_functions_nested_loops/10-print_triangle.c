#include "main.h"

/**
*print_triangle - A code that draws a diagonal line
*@size: that's the length and size of the diagonal line
*
*Return: void
*/
void print_triangle(int size)
{int i;
int j;
int k;
if (size > 0)
{
for (i = 1; i <= size; i++)
{
for (j = size; j > i; j--)
{_putchar(' ');
}
for (k = 0; k < i; k++)
{
_putchar('#');
}
_putchar('\n');
}
else if (size <= 0)
_putchar('\n');
}
}
