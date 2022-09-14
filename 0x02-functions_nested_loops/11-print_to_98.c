#include "main.h"
#include <stdio.h>
/**
*print_to_98 - prints all natural numbers from input to 98
*@a: starting point
*
*Return: returns nothing.
*/

void print_to_98(int a)
{
while (a != 98)
{
printf("%i, ", a);
if (a > 98)
{
a--;
}
else
{
a++;
}
}
printf("98\n");
}
