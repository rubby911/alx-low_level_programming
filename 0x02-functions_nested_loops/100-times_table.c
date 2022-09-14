#include "main.h"
#include <stdio.h>
/**
*print_times_table  - printstable, starting with any number.
*@n: The given interger areguement.n
*
*Return: returns nothing.
*/

void print_times_table(int n)
{int i, j, k, l, m, o;
if (n >= 0 && n < 15)
{i = 0;
for (; i <= n; i++)
{j = 0;
for (; j <= n; j++)
{k = i * j;
l = k / 100;
m = (k / 10) % 100;
o = (k % 100) % 10;
if (j == 0)
{
_putchar('0');
}
else if (c < 10)
{_putchar(' ');
_putchar(' ');
_putchar('0' + o);
}
else if (k < 100)
{
_putchar(' ');
_putchar('0' + m);
_putchar('0' + o);
}
else
{_putchar('0' + l);
_putchar('0' + m);
_putchar('0' + o);
}
if (j < n)
{
_putchar(',')
_putchar(' ');
}
else
{_putchar('\n');
}
}
