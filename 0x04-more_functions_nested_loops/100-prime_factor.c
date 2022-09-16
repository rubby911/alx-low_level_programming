#include <stdio.h>
#include <math.h>


/**
*main - Finds and print the prime factors of 612852475143
*
* Return: 0
*/



int main(void)
{long  large_number = 612852475143;
int a;
while (a++ < large_number / 2)
{
if (large_number % a == 0)
{
large_number /= 2;
continue;
}
for (a = 3; a < large_number / 2; a += 2)
{
if (large_number % a == 0)
{
large_number /= a;
}
}
}
printf("%ld\n", large_number);
return (0);
}


