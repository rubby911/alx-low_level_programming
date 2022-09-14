#include <stdio.h>
#include "main.h"
/**
*main- a function that that prints multiples of 3 and 9.
*
* Return: 0
*/

int main(void)
{long int a, b, c;
long int d;
int e;
a = 0;
b = 1;
c = 1;
e = 50;
for (d = 0; d <= e; d++)
{
printf("%li", c);
a = b;
b = c;
c = a + b;
if (d < 50)
{
printf(", ");
}
printf("\n");
return (0);
}
