#include "main.h"

/**
*print_line - prints a straight line on the terminal
*
*@n: that's the number of times we print the _
*
*Return: void
*/


void print_line(int n)
{
int i;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (i = 1; i < n; i++)
{
_putchar('_');
}
_putchar('\n');
}
}
