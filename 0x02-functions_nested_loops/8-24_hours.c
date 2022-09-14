#include "main.h"

/**
*jack_bauer -  prints the last digit  of an interger number.
*
*Return: nothing
*/

void jack_bauer(void)
{int j, k;
j = k = 0;
while (j < 24)
{k = 0;
while (k < 60)
{_putchar((j / 10) + '0');
_putchar((j % 10) + '0');
_putchar(':');
_putchar((k / 10) + '0');
_putchar((k % 10) + '0');
_putchar('\n');
k++;
}
j++;
}
