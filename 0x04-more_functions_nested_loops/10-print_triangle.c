#include "main.h"

/**
*print_triangle - A code that draws a diagonal line
*@size: that's the length and size of the diagonal line
*
*Return: void
*/
void print_triangle(int size)
{
int j1;
int k2;
if (size > 0)
{
for (j1 = 1; j1 <= size; j1++)
{
for ((k2 = size - j1); k2 > 0; k2--)
{
_putchar(' ')
for (k2 = 0; k2 < j1; k2++)
{
_putchar('#');
for (k2 = 0; k2 > j1; k2++)
if (j1 == size)
{
continue;
_putchar('\n');
}
}
_putchar('\n');
}
