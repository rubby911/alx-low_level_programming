#include "main.h"
#include <stdio.h>

/**
*main - Prints fibonnaci numbers up to 98
*
* Return: Nothing
*/

int main(void)
{int i = 3;
int large = 0;
unsigned long a = 1, b = 2, term_1 = 0, a_2 = 0, b_2 = 0, term_2 = 0;
unsigned long cut = 10000000000000000;
printf("%lu, %lu", a, b);
for (; i < 99; i++)
{printf(", ");
term_1 = a + b;
if (term_1 > cut)
large = 1;
if (large)
{
term_2 = term_1 / cut + a_2 + b_2;
term_1 = term_1 % cut;
printf("%lu", term_2);
printf("%016lu", term_1);
a_2 = b_2;
b_2 = term_2;
}
else
{
printf("%lu", term_1);
}
a = b;
b = term_1;
}
printf("\n");
return (0);
}
