#include "main.h"

/**
*print_last_digit -  prints the last digit  of an interger number.
*@a: The interger  size to be checked
*Return: eiter 0 or 1
*/

int print_last_digit(int a)
{
if ((a % 10) < a)
{a *= -1;
_putchar((a % 10) + '0');
return (a % 10);
}
}
