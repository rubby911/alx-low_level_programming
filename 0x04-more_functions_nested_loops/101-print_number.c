#include "main.h"
#include <stdio.h>
/**
*print_number - we're printing some serious numbers
*@n: that's the number, fear it.
*
* Return: void
*/


void print_number(int n)
{unsigned int myvalue = n;
if (n < 0)
{
_putchar('-');
myvalue  = -myvalue;
}
if ((myvalue / 10) > 0)
{
print_number(num / 10);
_putchar((num % 10) + 48);
}
}
