#include "main.h"

/**
*print_last_digit -  prints the last digit  of an interger number.
*@a: The interger  size to be checked
*Return: eiter 0 or 1
*/

int print_last_digit(int a)
{int j, k;
j = a % 10;
if (j < 0)
{j = -1;
k = '0' + 1;
_putchar(k);
}
return (j);
}
