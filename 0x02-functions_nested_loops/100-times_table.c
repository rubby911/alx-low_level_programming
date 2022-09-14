#include "main.h"
#include <stdio.h>
/**
*print_times_table  - printstable, starting with any number.
*@n: The given interger areguement.n
*
*Return: returns nothing.
*/

void print_times_table(int n)
{int a, b, c, d, e, f;
a = 0;
if (n >= 0 && n <= 15)
{
while (a <= n)
{b = 0;
while (b <= n)
{
c = a *b;
d = c % 10;
e = c % 100 / 10;
f = c / 100;
if (f == 0 && b != 0)
{_putchar(' ');
}
else
{_putchar(e + '0');
}
else if (f != 0)
{_putchar(f + '0');
_putchar(e + '0');
}
_putchar(d + '0');
if (b != n)
{_putchar(',');
_putchar(' ');
}
b++;
}
_putchar('\n');
a++;
}
}
