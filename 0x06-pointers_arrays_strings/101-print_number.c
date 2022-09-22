#include "main.h"

/**
*print_number - A function that prints an integer.
*@n:The interger to print
*Return: Returns void
*/


void print_number(int n)
{unsigned int i, j, counter, value, pow;
i = n;
pow = j = 1;
if (n < 0)
{
i = i * -1;
_putchar('-');
}
value = i;
while (value > 9)
{
j++;
value = value / 10;
}
for (counter = 1; counter < j; counter++)
{
while (pow > 1)
{
_putchar((i / pow) % 10 + '0');
pow = pow / 10;
}
_putchar(i % 10 + '0');
}
}

