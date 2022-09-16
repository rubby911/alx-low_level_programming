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
for (i = 0; i < n; i++)
{
if (n > 0)
{
_putchar('_');
}
else
{
_putchar('\n');
}
_putchar('\n');
}
}
