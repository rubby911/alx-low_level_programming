#include "main.h"
#include <stdio.h>
/**
*print_number - we're printing some serious numbers
*@n: that's the number, fear it.
*
* Return: void
*/


void print_number(int n)
{unsigned int myvalue;
if (n < 0)
{
_putchar('-');
myvalue  = -n;
}
else
{
myvalue = n;
}
if (myvalue / 10)
{
print_number(myvalues / 10)
}
_putchar((myvalue % 10) + '0')'
}
