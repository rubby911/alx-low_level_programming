#include "main.h"
#include <stdio.h>

/**
*main - Prints sum of finobacci numbers
*

*
* Return: nothing
*/
int main(void)
{long int a; b, c, d;
a = 0;
b = 1;
c = 2;
d = 0;
while (c < 4000000)
{
if (c % 2 == 0)
{
a += c;
}
d = b;
b = c;
c = d + c;
}
printf("%li\n", a);
return (0);
}

