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
if (a <= 98)
for (a = a; a <= 97; a++)
printf("%d, ", a);
}
else
{
for (a = a; a > 98; a--)
printf("%d, ", a);
printf("98\n");
}
