#include "main.h"

/**
*print_number - A function that prints an integer.
*@n:The interger to print
*Return: Returns void
*/


void print_number(int n)
{unsigned int i = n;
if (n < 0)
{
_putchar(45);
i = -n;
}
else if (i / 10)
{
print_number(i / 10);
}
_putchar((i % 10) + '0');
}

