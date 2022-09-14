#include "main.h"
#include <stdio.h>
/**
*print_times_table  - printstable, starting with any number.
*@n: The given interger areguement.n
*
*Return: returns nothing.
*/

void print_times_table(int n)
{int a, b, c;
if (n >= 0 && n <= 15)
{
for (b = 0; b <= n; b++)
{
for (c = 0; c <= n; c++)
{a = b * c;
if (c == 0)
{_putchar('0');
}
else if (c != 0 && a < 10)
{_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(' ');
_putchar(a + '0');
}
else if (a < 100)
{_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(a / 10 + '0');
_putchar(a % 10 + '0');
}
else if (a > 99)
{_putchar(',');
_putchar(' ');
_putchar(((a / 10)) / 10 + '0');
_putchar((a / 10) % 10 + '0');
_putchar(a % 10 + '0');
}
}
_putchar('\n');
}
}
}


