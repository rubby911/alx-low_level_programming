#include "main.h"

/**
*print_triangle - A code that draws a diagonal line
*@size: that's the length and size of the diagonal line
*
*Return: void
*/
void print_triangle(int size)
{
int j;
int k;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (j = 1; j <= size; j++)
{
for (k = j; k < size; k++)
{
_putchar(' ');
}
_putchar('\n');
}
}
}
