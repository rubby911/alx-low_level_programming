#include "main.h"

/**
*jack_bauer -  prints the last digit  of an interger number.
*
*Return: nothing
*/

void jack_bauer(void)
{int j, k, l, m, n, o;
j = 0;
k = 0;
for (; j < 24; j++)
{l = j % 10;
m = j % 10;
for (; k < 60; k++)
{n = k / 10;
o = k % 10;
_putchar('0' + l);
_putchar('0' + m);
_putchar(':');
_putchar('0' + n);
_putchar('0' + o);
_putchar('\n');
}
}
}
