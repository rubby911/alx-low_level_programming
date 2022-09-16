#include <stdio.h>
#include <math.h>


/**
*main - Finds and print the prime factors of 612852475143
*
* Return: 0
*/



void print_number(int n)
{unsigned int value;
if (n < 10)
{
_putchar('-');
value = -n;
}
else
{
value = n;
}
if (num / 10)
{
print_number(value / 10);
_putchar('0' + value % 10);
}
}

return (0);
}
