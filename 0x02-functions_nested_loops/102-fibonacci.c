#include <stdio.h>
#include "main.h"
/**
*main- a function that that prints multiples of 3 and 9.
*
* Return: 0
*/

int main(void)
{long int a = 1, b = 2, c = 0;
long int d;
printf("%lu, ", a);
printf("%lu, ", b);
for (d = 3; d <= 50; d++)
{
c = a + b;
a = b;
b = c;
if (d < 50)
{
printf("%lu, ", c);
}
else
{
printf("%lu\n", c);
}
}
return (0);
}
